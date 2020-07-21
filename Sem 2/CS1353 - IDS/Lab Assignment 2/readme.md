Goal: The goal of this assignment is to implement a program to measure the time required for searching a number in arrays of different sizes, and to analyze the time requirement with respect to the input array sizes.

Details: You have to measure the time taken using functions provided by C language.

1. Write a linear search function to search for the last occurrence of a number in a given array.
2. Inside the main function, declare an integer array of size MAX=100000 (10^5).
3. Consider different array sizes e.g. 10, 100, … , 100000. Perform Steps 4 to 6 for each chosen size n.
4. For a chosen size n, fill up the array with n integers generated randomly. The elements occupy positions 0 to n-1 of the array, overwriting any existing elements that might have been there.
5. Call the linear search function with this array, size of the array and a random search key to search the last occurrence of that integer in the array. Measure the running time.
6. Output the size and the time taken (in appropriate unit) by the search function.
7. At the end of the program, copy the messages corresponding to the <size, running time> information from the console and put that into a file.

NOTE:
+ The timer should measure the time taken by the search function, and not include the time taken to populate the array with random numbers.
+ Experiment with at least 8 different values of n.

Input: No input is needed for the program.

Output: Multiple lines, with each line displaying the size of the array and the time taken by the search function.
