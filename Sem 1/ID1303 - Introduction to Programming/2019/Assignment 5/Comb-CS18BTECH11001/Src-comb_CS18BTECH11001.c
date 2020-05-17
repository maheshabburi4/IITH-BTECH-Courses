#include <stdio.h>
long fact(int n) { // defining function for finding factorial
  long res = 1; // declaring a variable to store the factorial value
  for (int i = 2; i <= n; i++)
    res = res * i;
  return res; // returning the factorial value
}
int main(void) {
  int x, y; // declaring variables to store inputs
  scanf("%d%d", &x, &y); // taking inputs from user
  if (x < y || x < 0 || y < 0) { // checking the given conditions
    printf("Incorrect Input!!");
  } else {
    long comb; // variable for storing combination value
    comb = (fact(x) / (fact(x - y) * fact(y))); // finding combination value
    printf("%ld", comb);
  }
  return 0;
}
