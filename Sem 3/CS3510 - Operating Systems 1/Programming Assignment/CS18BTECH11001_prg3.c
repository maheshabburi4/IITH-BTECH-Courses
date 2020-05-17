
/*******************************************************************
 *
 * CS18BTECH11001_prog3.c  -   Case convertor using Inter processes communication by Pipes
 *
 * Author : A.Venkata Sai Mahesh
 * 
 * Date : 03/12/2019
 * 
 * Purpose: This program converts all the characters in a string to UPPERCASE ... using ASCII characters 
 *
 * Compilation: compile using command gcc CS18BTECH11001_prog3.c
 *
 *	Chronological list of all major changes and
			 1.Beware of Errors in unsuccesful creation of process
             2.Beware of Using more Memory size for string to avoid Array out of Bound Error
 *		bug fixes

 **************************************************************/

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<wait.h>

int main (void)
  {
    int pipe1[2];                                               //for the piping for Process 1 and Process 2
    int pipe2[2];                                               //for the piping for Process 2 and Process 3
    int pid1;                                                   //for the pid of first fork call
    int pid2;                                                   //for the pid of second fork call
    char str1[1024];                                            //string for taking input from User
    char str2[1024];                                            //string for storing read value from Process 1
    char str3[1024];                                            //string for storing read value from Process 2

    pipe (pipe1);                                                                               
    pipe (pipe2);                                                                           
    pid1 = fork ();                                                                 

    if (pid1 < 0)                                                                               
      {                                                                                   
        printf ("Error! in creation of Child Process 1 \n");                        
      }                                                                                                   
    else if(pid1!=0)                                                                            
      {                                                                                       
        close (pipe1[0]);                                                   
        printf ("Enter the string to be converted : ");                 
        fgets (str1, sizeof(str1), stdin);                      //parent process taking input from User
        write (pipe1[1], str1, strlen(str1) + 1);               //sending the string to Child 1
        close (pipe1[1]);
        pid2 = fork ();

        if (pid2 < 0) 
          {
            printf ("Error! in creation of Child Process 2 \n");
          }
        else if (pid2 == 0) 
          {
            close (pipe2[1]);
            read (pipe2[0],str3,sizeof(str3));                  //reading information from child 1
            close (pipe2[0]);
            printf ("The String after case flipping is : %s",str3);   //displaying converted string
            exit (0);
          }

        exit (0);
      }
    else 
      {
        close (pipe1[1]);
        wait (NULL);
        read (pipe1[0],str2,sizeof(str2));                      //reading information from Parent
        close (pipe1[0]);
        
        for (int i = 0 ; i < strlen(str2) ; i++)
          {
            if (str2[i] >= 'a' && str2[i] <= 'z')
              {
                str2[i] = str2[i]-32;
              }
            else if (str2[i] >= 'A' && str2[i] <= 'Z')
              {
                str2[i] = str2[i]+32;
              }
          }
        
        close (pipe2[0]);
        write (pipe2[1],str2,strlen(str2)+1);                   //sending converted string to Child 2
        close (pipe2[1]);
        exit (0);
      }
  }