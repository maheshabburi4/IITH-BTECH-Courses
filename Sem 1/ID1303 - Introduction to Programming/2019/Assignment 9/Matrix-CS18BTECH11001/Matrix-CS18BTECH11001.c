#include <stdio.h>
void matrixMultiplication(int r1, int c1, int c2, int A[r1][c1], int B[c1][c2],int C[r1][c2]) { // taking in parameters of orders r1,c1=r2,c2 and Matrices A,B,C
  printf("\nThe Multiplication Matrix C[%d][%d] :\n", r1, c2);
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      C[i][j] = 0; // we initialise each element to zero
      for (int k = 0; k < c1; k++) {
        C[i][j] += A[i][k] * B[k][j]; // the sum of products of elements of row i of A and elements of column j of B=element C[i][j]
      }
      printf("%d\t", C[i][j]); // printing the calculated element
    }
    printf("\n");
  }
}
void cofactor(int n, int a[n][n], int temp[n][n], int b, int c) {
  int k = 0, l = 0; // for iterating row and column of cofactor matrix(temp[n][n]) of a[b][c]
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != b && j != c) { // if the element a[i][j] is either in column 'c' or row 'b' of element a[b][c] we donot consider these elements in the cofactor matrix
        temp[k][l++] = a[i][j]; // if the above condtion satisfies we assign the element into cofactor matrix and increasing the column number
        if (l == n - 1) { // if the interator reaches the end of row
          k++; // we increase row iterator
          l = 0; // and start from beginning
        }
      }
    }
  }
}
int determinant(int n, int a[n][n]) {
  if (n == 1) // if there is only one element
    return a[0][0]; // the determinant = element
  int D = 0, temp[n][n], sign = 1; // consider a matrix of n*n for cofactor matrix such that last row and last column will be 0 as the original cofactor matrix is of order n-1*n-1
  for (int i = 0; i < n; i++) {
    cofactor(n, a, temp, 0, i); // calculating cofactor matrix of a[0][i]
    D += sign * a[0][i] *determinant(n - 1, temp); // the sum of product of minors(sign multiplied with det of cofactor matrix) of elements in first row(any row but for ease we considered first row) gives the det of given matrix
    sign = -sign; // changing the sign for the next element
  }
  return D; // returing the thus calculated determinant
}
void matrixInverse(int n, int a[n][n],float b[n][n]) { // taking in parameters of size of matrix,matrix,Inverse Matrix
  int d = determinant(n, a); // calculating determinant of matrix
  if (d == 0) // if the det is 0 the matrix is singular and the Inverse does not exist
    printf("\nInverse Matrix of C :\nThe Inverse of the matrix is not possible\n");
  else if (n == 1)// if there is only one element then the det will be the same number and Inverse will be the reciprocal of this element
    printf("\nInverse Matrix of C : \n%g\n", 1.0 / d); 
  else {
    int temp[n][n], sign; // consider a matrix of n*n for cofactor matrix
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cofactor(n, a, temp, i, j); // calculating the cofactor matrix of element a[i][j] and storing it in temp
        if ((i + j) % 2 ==0) // for finding the minor of matrix(the sign to be considered)
          sign = 1;
        else
          sign = -1;
        b[j][i] = (float)sign * determinant(n - 1, temp) /d; // calculating the determinant of cofactor matrix and multipling by sign gives minor and assigning reverse of element(b[j][i]) gives transpose(Adjacency element) and dividing by det of whole matrix gives Inverse element
      }
    }
    printf("\nInverse Matrix of C :\n");
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        printf("%.3f\t\t",b[i][j]); // outputting the elements in the inverse matrix
      }
      printf("\n");
    }
  }
}
int main() {
  int r1, c1, r2, c2, flag = 0; // variables for order of matrices
  do {
    if (flag == 1)
      printf("Error : Matrix multiplication is not possible.Enter the orders again:\n"); // we print error and ask user to enter order of matrices again
    printf("Enter the order of Matrix A : ");
    scanf("%d%d", &r1, &c1);
    while ((r1 < 2 || c1 < 2)) {
      printf("Error : Minimum Size of Matrix should be 2x2:\n");
      printf("Enter the order of Matrix A : ");
      scanf("%d%d", &r1, &c1);
    }
    printf("Enter the order of Matrix B : ");
    scanf("%d%d", &r2, &c2);
    while ((r2 < 2 || c2 < 2)) {
      printf("Error : Minimum Size of Matrix should be 2x2:\n");
      printf("Enter the order of Matrix B : ");
      scanf("%d%d", &r2, &c2);
    }
    flag = 1;
  }while (c1 != r2); // if the matrix multiplication is possible or not
  int A[r1][c1], B[r2][c2],C[r1][c2]; // for storing elements for 1st,2nd,multiplication matrix
  float D[r1][r1]; // for Inverse matrix(since the elements can contain decimals)
  printf("\nEnter Elements of Matrix A[%d][%d] : \n", r1, c1);
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++)
      scanf("%d", &A[i][j]); // taking elements of 1st Matrix
  }
  printf("Enter Elements of Matrix B[%d][%d] : \n", r2, c2);
  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++)
      scanf("%d", &B[i][j]); // taking elements of 2nd Matrix
  }
  matrixMultiplication(r1, c1, c2, A, B, C); // performing Matrix Multiplication of A,B aand storing the value in C(called by reference)
  if (r1 == c2) // checking whether the Inverse of multiplication exist or Not
    matrixInverse(r1, C, D); // performing Matrix Inverse of C and storing the value in D(called by reference)
  else
    printf("\nInverse Matrix of C :\nThe Inverse of the matrix is not possible\n"); // we print the inverse does not exist.
  return 0;
}