
/*******************************************************************
 *
 * CS18BTECH11001_prog1.c  -  Sending Signals which effect other process
 *
 * Author : A.Venkata Sai Mahesh
 * 
 * Date : 03/12/2019
 * 
 * Purpose: Creates 3 processes and 1 process will message for every second until second process kills and then terminates
 *
 * Compilation: compile using command gcc CS18BTECH11001_prog1.c
 *
 *	Chronological list of all major changes and
			 1.Beware of Errors in unsuccesful creation of process
             2.Beware of Errors in Unsuccesful signal sending due to non-autoritization
 *		bug fixes

 **************************************************************/

#include<stdio.h>
#include<signal.h>
#include<wait.h>
#include<unistd.h>

int main (void)
  {
    int pid1;                                                           //for the pid of first fork call
    int pid2;                                                           //for the pid of second fork call

    pid1 = fork ();                                                     //creating Child 1 to Parent
    
    if (pid1 == -1)                                                     //if any error occured in creating child 1
      {                                                  
        printf ("Error in creating Child 1 \n");
      }
    else if(pid1 != 0)                                                  //Parent
      {                                              
        pid2 = fork ();                                                 //Creting Child 2 to Parent

        if (pid2 == -1)                                                 //if any error occured in creating child 2
          {                                                                                       
            printf ("Error in creating Child 2\n");                                
          }                                                                                  
        else if( pid2 == 0)                                             //Child 2
          {                                                                    
            printf ("Child 2 is Going to sleep for 10 seconds \n");       
            sleep (10);                                                 //sleep for 10s
            printf ("Child 2 slept for 10 seconds\n");                                       
            int k = kill (pid1 , SIGKILL);                               //Kills child 1
            if(k == -1)
              {
                printf("Error! Couldn't Kill Child 1");
              }
            else
              {
                printf ("Child 2 killed Child 1\n");                                                
                sleep (10);                                                 //agains sleeps for 10s
              }
          }
        else 
          {
            waitpid (pid2 , NULL , 0);                                  //waiting for child 2 to terminate
            printf ("Child 2 is terminated \n");
            return 0;
          }
      }
    else 
      {
        int i = 1;                                                      //for noting the count number of running loop

        while(1) 
          {
            printf ("This is Child 1 having PID = %d printing message for the time %d \n" , getpid() , i++);
            sleep (1);                                                 //printing message for every 1s
          }
      }
  }