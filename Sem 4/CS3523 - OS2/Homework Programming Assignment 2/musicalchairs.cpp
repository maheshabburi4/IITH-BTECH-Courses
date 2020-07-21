/*
 * Program: Musical chairs game with n players and m intervals.
 * Author:  Abburi Venkata Sai Mahesh , Jillela Deepak Reddy
 * Roll# :  CS18BTECH11001 , CS18BTECH11016
 */

#include <stdlib.h>  /* for exit, atoi */
#include <iostream>  /* for fprintf */
#include <errno.h>   /* for error code eg. E2BIG */
#include <getopt.h>  /* for getopt */
#include <assert.h>  /* for assert */
#include <chrono>  	/* for timers */
#include <thread>   /* for threads */
#include <cstring>  /* for string comparision */
#include <mutex>    /* for mutex lock */
#include <condition_variable>  /* for condition variables */

/*
 * Forward declarations
 */
using namespace std;
void usage(int argc, char *argv[]);
unsigned long long musical_chairs(int nplayers);

/*
 *Global Variables for sharing
 */ 
string input;           
mutex mtx1,mtx2; 
int count=0;
int *player;
int lap=0;
int present_players;
bool music=false,temp=false;
condition_variable c1,c2;

int main(int argc, char *argv[])
{
    int c;
	int nplayers = 0;

    /* Loop through each option (and its's arguments) and populate variables */
    while (1) {
        int this_option_optind = optind ? optind : 1;
        int option_index = 0;
        static struct option long_options[] = {
            {"help",            no_argument,        0, 'h'},
            {"nplayers",         required_argument,    0, '1'},
            {0,        0,            0,  0 }
        };

        c = getopt_long(argc, argv, "h1:", long_options, &option_index);
        if (c == -1)
            break;

        switch (c) {
        case 0:
            cerr << "option " << long_options[option_index].name;
            if (optarg)
                cerr << " with arg " << optarg << endl;
            break;

        case '1':
            nplayers = atoi(optarg);
            break;

        case 'h':
        case '?':
            usage(argc, argv);

        default:
            cerr << "?? getopt returned character code 0%o ??n" << c << endl;
            usage(argc, argv);
        }
    }

    if (optind != argc) {
        cerr << "Unexpected arguments.\n";
        usage(argc, argv);
    }


	if (nplayers == 0) {
		cerr << "Invalid nplayers argument." << endl;
		return EXIT_FAILURE;
	}

    unsigned long long game_time;
	game_time = musical_chairs(nplayers);

    cout << "Time taken for the game: " << game_time << " us" << endl;

    exit(EXIT_SUCCESS);
}

/*
 * Show usage of the program
 */
void usage(int argc, char *argv[])
{
    cerr << "Usage:\n";
    cerr << argv[0] << "--nplayers <n>" << endl;
    exit(EXIT_FAILURE);
}

void umpire_main(int nplayers)
{
    while(lap!=nplayers){
        
        /* read stdin only from umpire */
        cin>>input;

        /* LAP_START */
        if(input.compare("lap_start")==0) {
            count=0;                    //initializing no.of chairs empty to zero
            temp=false;                 //Ensuring all the players are ready
        }

        /* PLAYER_SLEEP */
        else if(input.compare("player_sleep")==0) {
            int delay_id,delay;
            cin>>delay_id>>delay;       //taking player_id and the time to delay from stdin
            player[delay_id]+=delay;    //we add delay time of player with the scanned delay for the same lap
        }

        /* MUSIC_START */
        else if(input.compare("music_start")==0) {
            music=true;                 //represents all the player threads that music is running 
            c2.notify_all();            //notify all player threads to sleep(if there is a delay)
        }

        /* UMPIRE_SLEEP */
        else if(input.compare("umpire_sleep")==0) {
            int delay;
            cin>>delay;                 //taking umpire delay from stdin
            
            //Sleeping Umpire for the delayed time
            std::this_thread::sleep_for(std::chrono::microseconds(delay));
        }

        /* MUSIC_STOP */
        else if(input.compare("music_stop")==0) {
            unique_lock<mutex> lock1(mtx1); //Applying lock which will be unlocked by the last thread in the lap
            temp=true;                  //represents all player threads that the music_stop commad has been scanned 
            c1.wait(lock1);             //waiting until the thread lost has exited
        }

        /* LAP_STOP */
        else if(input.compare("lap_stop")==0) {
            music=false;                //represents all player threads that they can exit from the music_stop
            lap++;                      //increasing the lap variable as one lap has completed

            if(present_players==1) {    //if only one player is left 
                c2.notify_one();        //to exit waiting the last remaining thread
                return;                 //exiting the umpire thread
            }
        }
    }
	return;
}

void player_main(int plid)
{
    /* Add your code here */
	/* synchronize stdouts coming from multiple players */
    while(1) {

        if(music){                                           //if music_start command is passed

            if(player[plid]>0){                              //checking the player id whether it has sleep period or not

                /* Sleeping the player for the given time */
                std::this_thread::sleep_for(std::chrono::microseconds(player[plid]));

                player[plid]=0;                              //rephrasing the player_delay time to zero for the next lap
            }

            if(temp){
                unique_lock<mutex> lock2(mtx2);             //to ensure no context switching until all the below commands exits
                count++;                                    //every player which will run first, gets a chair 
                if(count==present_players) {                //last player
                    present_players--;                      //decreases the no. of present players as it has to be exited

                    /* Printing that the thread is about to exit in the present lap */
                    cout<<"======= lap# "<<lap+1<<" ======="<<endl;
                    fflush(stdout); 
                    cout<<plid<<" could not get chair"<<endl;
                    fflush(stdout);
                    cout<<"**********************"<<endl;
                    fflush(stdout);

                    lock2.unlock();                         //To remove the lock before exiting
                    c1.notify_one();                        //To enter into lap_stop
                    return;                                 //exiting
                }   
                c2.wait(lock2);                             //waiting all threads untill notified
            }
        }
        if(present_players==1) {                            //For the last player alive

            /* Printing that the last player is the winner */
            cout<<"Winner is "<<plid<<endl;
            fflush(stdout);
            return;                                         //exiting the last player
        }
    }
    return;
}

unsigned long long musical_chairs(int nplayers)
{
	auto t1 = chrono::steady_clock::now();                  //starting the clock

    //initializing variables for the first time
	present_players=nplayers;
    player=(int*)malloc(nplayers*sizeof(int));
    for(int i=0;i<nplayers;i++) {
        player[i]=0;
    }

    // Printing the title
    cout<<"Musical Chairs: "<<nplayers<<" player game with "<<nplayers-1<<" laps."<<endl;
    fflush(stdout);

    // Spawn umpire thread.
    thread umpire_thread(umpire_main,nplayers);
    
    // Spawn n player threads.
    thread player_thread[nplayers];
    int pid[nplayers];                                      //to avoid synchronization issue while passing player id as argument
    for(int i=0; i<nplayers; i++) {
        pid[i]=i;
        player_thread[i] = thread(player_main,pid[i]);
    }
    
    //Waiting until umpire thread exits
    umpire_thread.join();                               

    //Waiting until all the player thread exits
    for(int i=0; i < nplayers; i++) {
        player_thread[i].join();
    }
    
    auto t2 = chrono::steady_clock::now();                //stopping the clock
    
	auto d1 = chrono::duration_cast<chrono::microseconds>(t2 - t1);

	return d1.count();
}