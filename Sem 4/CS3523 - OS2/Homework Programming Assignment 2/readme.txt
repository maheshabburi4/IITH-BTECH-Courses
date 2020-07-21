Assignment 2
Roll No 1 : CS18BTECH11001
Roll No 2 : CS18BTECH11016

List of files Submitted :

musicalchairs.cpp
report.pdf
readme.txt

Compilation :
Compile the code using the command :

$g++ -o musicalchairs musicalchairs.cpp -pthread

As we are using threads in the musicalchairs.cpp we should include -pthread so that it can compile the code recognising the thread header file. This command on successful will create an executable file with name musicalchairs in the same directory as of musicalchairs.cpp 


Running :
Run the code using the command :

$./musicalchairs --nplayers 4 < input4rand.txt

This will run the executable file musicalchairs and taking the option --nplayers and the value as 4 respectively. Here the < input4rand.txt will say the compiler that the stdin has changed to input4rand.txt.


Sample outputs :
edith@edith-G7-7588:~$ cd "/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2"
edith@edith-G7-7588:/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2$ g++ -o musicalchairs musicalchairs.cpp -pthread
edith@edith-G7-7588:/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2$ cat input4rand.txt 
lap_start
music_start
music_stop
lap_stop
lap_start
music_start
music_stop
lap_stop
lap_start
music_start
music_stop
lap_stop
edith@edith-G7-7588:/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2$ ./musicalchairs --np 4 < input4rand.txt
Musical Chairs: 4 player game with 3 laps.
======= lap# 1 =======
2 could not get chair
**********************
======= lap# 2 =======
1 could not get chair
**********************
======= lap# 3 =======
0 could not get chair
**********************
Winner is 3
Time taken for the game: 1041 us
edith@edith-G7-7588:/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2$ cat input4rand.txt 
lap_start
music_start
umpire_sleep 200
music_stop
lap_stop
lap_start
music_start
umpire_sleep 200000
music_stop
lap_stop
lap_start
music_start
umpire_sleep 800000
music_stop
lap_stop
edith@edith-G7-7588:/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2$ ./musicalchairs --np 4 < input4rand.txt
Musical Chairs: 4 player game with 3 laps.
======= lap# 1 =======
2 could not get chair
**********************
======= lap# 2 =======
0 could not get chair
**********************
======= lap# 3 =======
3 could not get chair
**********************
Winner is 1
Time taken for the game: 1001775 us
edith@edith-G7-7588:/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2$ cat input4rand.txt 
lap_start
player_sleep 0 1000
player_sleep 1 2000
player_sleep 2 3000
player_sleep 3 4000
music_start
umpire_sleep 200
music_stop
lap_stop
lap_start
player_sleep 0 1000
player_sleep 1 2000
player_sleep 2 3000
music_start
umpire_sleep 200000
music_stop
lap_stop
lap_start
player_sleep 0 1000
player_sleep 1 2000
music_start
umpire_sleep 800000
music_stop
lap_stop
edith@edith-G7-7588:/media/edith/New Volume/Sem 4/OS II/Homework Programming Assignment 2$ ./musicalchairs --np 4 < input4rand.txt
Musical Chairs: 4 player game with 3 laps.
======= lap# 1 =======
3 could not get chair
**********************
======= lap# 2 =======
1 could not get chair
**********************
======= lap# 3 =======
2 could not get chair
**********************
Winner is 0
Time taken for the game: 1005737 us
