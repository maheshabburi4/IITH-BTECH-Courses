Consider two arrays A and C, of same size. Take integers as input from the console, and store them in A. Assume that each input integer comes from the range [0,RANGE]. Define the value of RANGE in your code. Also, assume that the elements of A are all distinct. Whenever an integer outside the above specified range is provided, or whenever a duplicate element comes as input, do not include that element in the array, and consider that the input stream has terminated.

Create an array B. j^th entry of B will store the number of elements from A having value <= j. Construct B from A, and output B.

C is expected to hold the sorted version of A. Now that you have B, populate C by referring to B. Once you are done, print the contents of C.