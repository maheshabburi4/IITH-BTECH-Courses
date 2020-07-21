/*
 * Program: Scheduling policy and priority illustration with leader-member processes.
 * Author:  Maruthi S. Inukonda
 * Roll# :  cs18resch01001
 */

#include <getopt.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sched.h>
#include <linux/sched.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/sysinfo.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>

#define ITERATIONS 5000000000UL
//#define DEBUG

void usage (int argc, char *argv[]);
int parse_sched_policy (char *str);
int parse_sched_priority (char *str);
int sched_func (int policy, int priority, int leader);
const char* my_sched_policy ();
int my_sched_priority ();

int A[1000000];
int
main (int argc, char *argv[])
{
  int c;

  int member_sched_policy = SCHED_OTHER, leader_sched_policy = SCHED_OTHER;
  int member_sched_priority = 0, leader_sched_priority = 0;
  /* Loop through each option (and its's arguments) and populate variables */
  while (1)
    {
      int this_option_optind = optind ? optind : 1;
      int option_index = 0;
      static struct option long_options[] = {
	{"help", no_argument, 0, 'h'},
	{"member_policy", required_argument, 0, '1'},
	{"member_priority", required_argument, 0, '2'},
	{"leader_policy", required_argument, 0, '3'},
	{"leader_priority", required_argument, 0, '4'},
	{0, 0, 0, 0}
      };

      c = getopt_long (argc, argv, "h1:2:", long_options, &option_index);
      if (c == -1)
	break;

      switch (c)
	{
	case 0:
	  fprintf (stdout, "option %s", long_options[option_index].name);
	  if (optarg)
	    fprintf (stdout, " with arg %s", optarg);
	  fprintf (stdout, "\n");
	  break;

	case '1':
	  member_sched_policy = parse_sched_policy (optarg);
	  break;

	case '2':
	  member_sched_priority = parse_sched_priority (optarg);
	  break;

	case '3':
	  leader_sched_policy = parse_sched_policy (optarg);
	  break;

	case '4':
	  leader_sched_priority = parse_sched_priority (optarg);
	  break;

	case 'h':
	case '?':
	  usage (argc, argv);

	default:
	  fprintf (stdout, "?? getopt returned character code 0%o ??\n", c);
	  usage (argc, argv);
	}
    }

  if (optind != argc)
    {
      fprintf (stderr, "Unexpected arguments\n");
      usage (argc, argv);
      exit (EXIT_FAILURE);
    }

  if ((leader_sched_policy == SCHED_RR || leader_sched_policy == SCHED_FIFO)
      && leader_sched_priority == 0)
    {
      fprintf (stderr,
	       "Priority 0 is not supported for RR and FIFO policies\n");
    }
  if ((member_sched_policy == SCHED_RR || member_sched_policy == SCHED_FIFO)
      && member_sched_priority == 0)
    {
      fprintf (stderr,
	       "Priority 0 is not supported for RR and FIFO policies\n");
    }
  long long i;
  int np = get_nprocs ();
  int spid, cpid;
  int status;
  void *exit_status;

//#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
  for (i = 0; i < np; i++)
    {
      if ((cpid = fork ()) < 0)
	{
	  fprintf (stderr, "fork() failed\n");
	  exit (EXIT_FAILURE);
	}
      if (cpid == 0)
	{
	  sched_func (member_sched_policy, member_sched_priority, 0);
	  exit (EXIT_SUCCESS);
	}
    }
  if ((spid = fork ()) < 0)
    {
      fprintf (stderr, "fork() failed\n");
      exit (EXIT_FAILURE);
    }
  if (spid == 0)
    {
      sched_func (leader_sched_policy, leader_sched_priority, 1);
      exit (EXIT_SUCCESS);
    }
  else
    {
      spid = waitpid (spid, &status, 0);
    }
  // try to wait for any children while there exists at least one
  while ((cpid = waitpid (-1, &status, 0)) != -1)
    {
      //printf("Process %d terminated\n", cpid);
    }

  exit (0);
}

/*
 * Show usage of the program
 */
void
usage (int argc, char *argv[])
{
  fprintf (stderr, "Usage:\n");
  fprintf (stderr,
	   "%s --leader_policy <sched_policy>  --leader_priority <sched_priority>\n"
	   "   --member_policy <sched_policy>  --member_priority <sched_priority>\n"
	   "Where <sched_policy> can be other|batch|idle|fifo|rr\n"
	   "      <sched_priority> can be 0 to 99.\n"
	   "Default <sched_policy> is 'other', <sched_priority> is 0\n",
	   argv[0]);
  exit (EXIT_FAILURE);
}

int
parse_sched_policy (char *str)
{
  int policy = 0;
  if (strncmp (str, "other", 5) == 0)
    {
      policy = SCHED_OTHER;
    }
  else if (strncmp (str, "batch", 5) == 0)
    {
      policy = SCHED_BATCH;
    }
  else if (strncmp (str, "idle", 4) == 0)
    {
      policy = SCHED_IDLE;
    }
  else if (strncmp (str, "fifo", 4) == 0)
    {
      policy = SCHED_FIFO;
    }
  else if (strncmp (str, "rr", 2) == 0)
    {
      policy = SCHED_RR;
    }
  else
    {
      fprintf (stderr, "invalid policy argument\n");
      exit (EXIT_FAILURE);
    }
  return policy;
}

int
parse_sched_priority (char *str)
{
  int priority = 0;
  priority = atoi (str);
  if (priority < 0 || priority > 99)
    {
      fprintf (stderr, "invalid priority argument\n");
      exit (EXIT_FAILURE);
    }
  return priority;
}

int
sched_func (int policy, int priority, int leader)
{
  long int i;
  int sched_setscheduler (pid_t pid, int policy, const struct sched_param *p);
  int sched_getscheduler (pid_t pid);
  int getrusage (int who, struct rusage *usage);

  struct sched_param p;
  struct rusage usage;
  struct timeval t0, t1;
  int sum = 0;

  p.sched_priority = priority;
  if (sched_setscheduler (0, policy, &p) != 0)
    {
      fprintf (stdout, "Failed to set the scheduler\n");
    }
  if (leader)
    {
      fprintf(stdout, "Leader:: policy:%s priority:%d\n", my_sched_policy(), my_sched_priority());
      gettimeofday (&t0, 0);
    }

  for (i = 0; i < ITERATIONS; i++)
    A[i % 999999] = random ();

  if (leader)
    {
      gettimeofday (&t1, 0);
      unsigned long long elapsed =
	(t1.tv_sec - t0.tv_sec) * 1000000 + t1.tv_usec - t0.tv_usec;
      getrusage (RUSAGE_SELF, &usage);
      fprintf (stdout, "Leader:: Number of page faults = %ld\n", usage.ru_majflt);
      fprintf (stdout, "Leader:: Number of voluntary switches = %ld\n",
	       usage.ru_nvcsw);
      fprintf (stdout, "Leader:: Number of involuntary switches = %ld\n",
	       usage.ru_nivcsw);
      fprintf (stdout, "Leader:: Time taken: %llu us\n", elapsed);
    }
  return sum;
}

const char*
my_sched_policy()
{
  int pol;
  pol = sched_getscheduler (0);
  switch (pol)
    {
    case SCHED_OTHER:
    //case SCHED_NORMAL:
      return "OTHER";
    case SCHED_BATCH:
      return "BATCH";
    case SCHED_IDLE:
      return "IDLE";
    case SCHED_FIFO:
      return "FIFO";
    case SCHED_RR:
      return "RR";
    }
}

int
my_sched_priority ()
{
  struct sched_param p;
  sched_getparam(0, &p);
  return p.sched_priority;
}
