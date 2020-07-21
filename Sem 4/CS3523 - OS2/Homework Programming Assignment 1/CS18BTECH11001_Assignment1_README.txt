Assignment 1
Roll No : CS18BTECH11001

List of files Submitted :

CS18BTECH11001_Assignment1_README.txt
CS18BTECH11001_Assignment1_Report.pdf
matmul.c


Compilation :
Compile the code using the command :

$gcc -o matmul matmul.c -pthread

As we are using threads in the matmul.c we should include -pthread so that it can compile the code recognising the pthread.h header file. This command on successful will create an executable file with name matmul in the same directory as of matmul.c 


Running :
Run the code using the command :

$./matmul --ar 3 --ac 4 --br 4 --bc 5 --interactive        (for interactive mode)
$./matmul --ar 3 --ac 4 --br 4 --bc 5                        (for non-interactive mode)

This will run the executable file matmul and taking the options --ar,--ac,--br,--bc and the values as 3,4,4,5 respectively. Here the --interactive option is optional.


Sample Outputs :
edith@edith-G7-7588:~$ cd Desktop/
edith@edith-G7-7588:~/Desktop$ gcc -o matmul matmul.c -pthread
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 3 --ac 3 --br 3 --bc 3
Time taken for single threaded: 1 us
Time taken for multi process: 824 us
Time taken for multi threaded: 108 us
Speedup for multi process : 0.00 x
Speedup for multi threaded : 0.01 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 10 --ac 10 --br 10 --bc 10
Time taken for single threaded: 2 us
Time taken for multi process: 220 us
Time taken for multi threaded: 96 us
Speedup for multi process : 0.01 x
Speedup for multi threaded : 0.02 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 30 --ac 30 --br 30 --bc 30
Time taken for single threaded: 292 us
Time taken for multi process: 957 us
Time taken for multi threaded: 396 us
Speedup for multi process : 0.31 x
Speedup for multi threaded : 0.74 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 50 --ac 50 --br 50 --bc 50
Time taken for single threaded: 1344 us
Time taken for multi process: 1751 us
Time taken for multi threaded: 676 us
Speedup for multi process : 0.77 x
Speedup for multi threaded : 1.99 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 100 --ac 100 --br 100 --bc 100
Time taken for single threaded: 4567 us
Time taken for multi process: 1912 us
Time taken for multi threaded: 375 us
Speedup for multi process : 2.39 x
Speedup for multi threaded : 12.18 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 400 --ac 400 --br 400 --bc 400
Time taken for single threaded: 150074 us
Time taken for multi process: 112886 us
Time taken for multi threaded: 6476 us
Speedup for multi process : 1.33 x
Speedup for multi threaded : 23.17 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 800 --ac 800 --br 800 --bc 800
Time taken for single threaded: 1340592 us
Time taken for multi process: 1027244 us
Time taken for multi threaded: 93817 us
Speedup for multi process : 1.31 x
Speedup for multi threaded : 14.29 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 1000 --ac 1000 --br 1000 --bc 1000
Time taken for single threaded: 2645015 us
Time taken for multi process: 2070354 us
Time taken for multi threaded: 335518 us
Speedup for multi process : 1.28 x
Speedup for multi threaded : 7.88 x
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 2 --ac 3 --br 4 --bc 5
edith@edith-G7-7588:~/Desktop$ ./matmul --ar 3 --ac 4 --br 4 --bc 5 --interactive
Enter A:
1 2 3 4
5 6 7 8
9 0 1 2
Enter B:
1 2 3 4 5
6 7 8 9 0 
1 2 3 4 5
6 7 8 9 0
Result:
40 50 60 70 20 
96 122 148 174 60 
22 34 46 58 50 
Enter A:
1 2 3 4
5 6 7 8
9 0 1 2
Enter B:
1 2 3 4 5
6 7 8 9 0
1 2 3 4 5
6 7 8 9 0
Result:
40 50 60 70 20 
96 122 148 174 60 
22 34 46 58 50 
Enter A:
1 2 3 4  
5 6 7 8
9 0 1 2
Enter B:
1 2 3 4 5
6 7 8 9 0
1 2 3 4 5
6 7 8 9 0
Result:
40 50 60 70 20 
96 122 148 174 60 
22 34 46 58 50 
Time taken for single threaded: 2 us
Time taken for multi process: 840 us
Time taken for multi threaded: 124 us
Speedup for multi process : 0.00 x
Speedup for multi threaded : 0.02 x
edith@edith-G7-7588:~/Desktop$ ./matmul --help
Usage:
./matmul --ar <rows_in_A>  --ac <cols_in_A> --br <rows_in_B>  --bc <cols_in_B> [--interactive]edith@edith-G7-7588:~/Desktop$
