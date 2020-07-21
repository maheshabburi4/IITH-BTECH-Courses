/*
 * Program: Speedup calculation of matrix multiplication with
 *          multi-processing and multi-threading.
 * Author:  A.Venkata Sai Mahesh
 * Roll# :  CS18BTECH11001
 */

#include <stdlib.h> /* for exit, atoi */
#include <stdio.h>  /* for fprintf */
#include <errno.h>  /* for error code eg. E2BIG */
#include <getopt.h> /* for getopt */
#include <assert.h> /* for assert */
#include<time.h>    /* for the gettimeofday */
#include<pthread.h> /* for threads */ 
#include<unistd.h>  /* for fork */
#include<sys/wait.h>/* for wait function */
#include<sys/types.h>/* for pid_t */
#include<signal.h>
#include <sys/ipc.h> /* for inter process communication */
#include <sys/shm.h> /* for the shared memory */
#include<sys/time.h>
#include<stdint.h>

/*
 * Forward declarations
 */
void usage(int argc, char *argv[]);
void init_matrix();
void input_matrix(int *mat, int nrows, int ncols);
void output_matrix(int *mat, int nrows, int ncols);
unsigned long long single_thread_mm();  
unsigned long long multi_thread_mm();
unsigned long long multi_process_mm();

//variable declaration
int *A, *B, *C;
int crows, ccols;
int arows, acols, brows, bcols;
char interactive = 0;
int shmidC; //a variable in shared memory
struct timeval start, end;  //inbuilt timeval structure of time.h 
int usec,sec;   //for microsec and sec

int main(int argc, char *argv[])
{
	int c;

	/* Loop through each option (and its's arguments) and populate variables */
	while (1) {
		int this_option_optind = optind ? optind : 1;
		int option_index = 0;
		static struct option long_options[] = {
			{"help",	no_argument,		0, 'h'},
			{"ar",		required_argument,	0, '1'},
			{"ac",		required_argument,	0, '2'},
			{"br",		required_argument,	0, '3'},
			{"bc",		required_argument,	0, '4'},
			{"interactive",	no_argument, 		0, '5'},
			{0,		0,			0,  0 }
		};

		c = getopt_long(argc, argv, "h1:2:3:4:5", long_options, &option_index);
		if (c == -1)
			break;

		switch (c) {
		case 0:
			fprintf(stdout, "option %s", long_options[option_index].name);
            fflush(stdout);
			if (optarg)
				fprintf(stdout, " with arg %s", optarg);
                fflush(stdout);
				fprintf(stdout, "\n");
                fflush(stdout);
			break;

		case '1':
			arows = atoi(optarg);
			break;

		case '2':
			acols = atoi(optarg);
			break;

		case '3':
			brows = atoi(optarg);
			break;

		case '4':
			bcols = atoi(optarg);
			break;

		case '5':
			interactive = 1;
			break;

		case 'h':
		case '?':
			usage(argc, argv);

		default:
			fprintf(stdout, "?? getopt returned character code 0%o ??\n", c);
            fflush(stdout);
			usage(argc, argv);
		}
	}

	if (optind != argc) {
		fprintf(stderr, "Unexpected arguments\n");
        fflush(stdout);
		usage(argc, argv);
	}

    if(acols != brows) {    //if multiplication is not possible
        exit(EXIT_FAILURE);
    }

    //the order of matrix C
    crows = arows;
    ccols = bcols;

    //Allocating memory in Heap segment
    A=(int*)malloc(arows*acols*sizeof(int));
    B=(int*)malloc(brows*bcols*sizeof(int));
	C=(int*)malloc(crows*ccols*sizeof(int));

    //for time through various methods
	unsigned long long time_single, time_multi_process, time_multi_thread;

	time_single=single_thread_mm();
    time_multi_process=multi_process_mm();
    time_multi_thread=multi_thread_mm();

    fprintf(stdout, "Time taken for single threaded: %llu us\n",
	        time_single);
    fflush(stdout);
	fprintf(stdout, "Time taken for multi process: %llu us\n",
			time_multi_process);
	fflush(stdout);
    fprintf(stdout, "Time taken for multi threaded: %llu us\n",
			time_multi_thread);
	fflush(stdout);
    fprintf(stdout, "Speedup for multi process : %4.2f x\n",
			(double)time_single/time_multi_process);
	fflush(stdout);
    fprintf(stdout, "Speedup for multi threaded : %4.2f x\n",
			(double)time_single/time_multi_thread);
    fflush(stdout);

	exit(EXIT_SUCCESS);
}

/*
 * Show usage of the program
 */
void usage(int argc, char *argv[])
{
	fprintf(stderr, "Usage:\n");
    fflush(stdout);
	fprintf(stderr, "%s --ar <rows_in_A>  --ac <cols_in_A>"
			" --br <rows_in_B>  --bc <cols_in_B>"
			" [--interactive]",
			argv[0]);
    fflush(stdout);
	exit(EXIT_FAILURE);
}

/*
 * Initializing Matrices A and B 
 */
void init_matrix()
{
    for(int i=0; i<arows*acols; i++)
        A[i] = rand();
    for(int i=0; i< brows*bcols; i++)
        B[i] = rand();
    for(int i=0; i<crows*ccols; i++)
        C[i] = 0;
}

/*
 * Input a given 2D matrix
 */
void input_matrix(int *mat, int rows, int cols)
{
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			fscanf(stdin, "%d", mat+(i*cols+j));
		}
	}
}

/*
 * Output a given 2D matrix
 */
void output_matrix(int *mat, int rows, int cols)
{
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			fprintf(stdout, "%d ", *(mat+(i*cols+j)));
            fflush(stdout);
		}
		fprintf(stdout, "\n");
        fflush(stdout);
	}
}

/*
 * Single Thread Matrix Multiplication
 */
unsigned long long single_thread_mm()
{
    if(interactive == 0) {
        init_matrix();
    }
    else if(interactive == 1) {
        fprintf(stdout,"Enter A:\n");
        fflush(stdout);
        input_matrix(A,arows,acols);
        fprintf(stdout,"Enter B:\n");
        fflush(stdout);
        input_matrix(B,brows,bcols);
    }

    int p,l,m;
    
    gettimeofday(&start, 0);        //starting time
    
    for(int i=0; i<crows; i++) {
        l=i*acols,m=i*ccols;
        for(int j=0; j<ccols; j++) {
            p=0;
            for(int k=0; k<acols; k++) {
                p += A[l+k] * B[k*bcols+j];
            }
            C[m+j] = p;
        }
    }

    gettimeofday(&end, 0);          //ending time
    sec = end.tv_sec - start.tv_sec;
    usec = end.tv_usec - start.tv_usec;
    unsigned long long int lusec =sec*1000000+usec; //calculating time in microseconds

    
    if(interactive == 1) {
        fprintf(stdout,"Result:\n");
        fflush(stdout);
        output_matrix(C,crows,ccols);
    }

    return lusec;
}

/*
 * Multiplication function for threads
 */
void * multiplication(void *arg)
{   
    
    int *data = (int *)arg;
    int i=(*data),p=0,l=i*acols,m=i*ccols; //for reducing multiple accesses to the heap segment
    
    for(int j=0; j<ccols; j++) {
        p=0;
        for(int k=0; k<acols; k++) {
            p += A[l+k] * B[k*bcols+j];
        }
        C[m+j] = p;
    } 
} 

/*
 * Multiple Thread Matrix Multiplication
 */
unsigned long long multi_thread_mm() 
{   
    if(interactive == 0) {
        init_matrix();
    }
    else if(interactive == 1) {
        fprintf(stdout,"Enter A:\n");
        fflush(stdout);
        input_matrix(A,arows,acols);
        fprintf(stdout,"Enter B:\n");
        fflush(stdout);
        input_matrix(B,brows,bcols);
    }
    
    pthread_t thread[crows];    //making crows as optimal number of threads
    
    int *data = (int*)malloc(crows*sizeof(int));    //for differentiating arguments to be passed to thread
    
    for(int i=0; i<crows; i++) {
        data[i]=i; 
        pthread_create(&thread[i],NULL,multiplication,&data[i]);
    } 
    
    gettimeofday(&start, 0);    //starting time

    for(int i=0; i<crows; i++) {
        pthread_join(thread[i],NULL);
    }

    gettimeofday(&end, 0);      //ending time
    sec = end.tv_sec - start.tv_sec;
    usec = end.tv_usec - start.tv_usec;
    unsigned long long int lusec =sec*1000000+usec; //calculating time in microseconds
    
    if(interactive == 1) {
        fprintf(stdout,"Result:\n");
        fflush(stdout);
        output_matrix(C,crows,ccols);
    }
    
    return lusec;
}

/*
 * Multi Process Matrix Multiplication
 */ 
unsigned long long multi_process_mm() 
{
    if(interactive == 0) {
        init_matrix();
    }
    else if(interactive == 1) {
        fprintf(stdout,"Enter A:\n");
        fflush(stdout);
        input_matrix(A,arows,acols);
        fprintf(stdout,"Enter B:\n");
        fflush(stdout);
        input_matrix(B,brows,bcols);
    }
    
    int i,j,k;
    
    //Assigning C to Shared Memory
    key_t key = ftok("shmfile",789); 
    int shmflg =IPC_CREAT | 0666;
    shmidC=shmget(key,(sizeof(int))*arows*bcols,shmflg);
    C=shmat(shmidC,NULL,0);

    gettimeofday(&start, 0);    //starting time
    
    pid_t pid;
    pid=fork(); //creating worker process

    if(pid<0) { //reporting error in process creation
        exit(EXIT_FAILURE);
    }
    else if(pid==0) {
        pid=fork(); //creating another worker process
        if(pid<0) { //reporting error in process creation
            exit(EXIT_FAILURE);
        }
        else if(pid==0){    //doing half computation
            for( i=0 ; i<(crows/2) ; i++ ) {
                for( j=0 ; j<ccols ; j++ ) {
                    C[i*ccols+j] =0;
                    for( k=0 ; k<acols ; k++ ) {
                        C[i*ccols +j] += A[i*acols+k]*B[k*bcols+j];
                    }
                }
            }
            shmdt(C);
            exit(0);
        }
        else{   //doing another half computation
            for( i=(crows/2) ; i<arows ; i++ ) {
                for( j=0 ; j<ccols ; j++ ) {
                    C[i*ccols + j] =0;
                    for( k=0 ; k<acols ; k++ ) {
                        C[i*ccols + j] += A[i*acols+k]*B[k*bcols+j];
                    }
                }
            }
            shmdt(C);
            exit(0);
        }
    }
    else {     
        //As mentioned in the Assignment Parent process shouldn't do any computation
        while(wait(NULL)!=-1); //wait until all process complete their computation 
        shmctl(shmidC, IPC_RMID, 0);
    }

    gettimeofday(&end, 0);  //stopping time
    sec = end.tv_sec - start.tv_sec;
    usec = end.tv_usec - start.tv_usec;
    unsigned long long int lusec; 
    lusec =sec*1000000+usec;    //calculating time in microseconds

    if(interactive == 1) {
        fprintf(stdout,"Result:\n");
        fflush(stdout);
        output_matrix(C,crows,ccols);
    }

    return lusec; 
}