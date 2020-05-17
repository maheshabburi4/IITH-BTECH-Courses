#include<stdio.h>
int RANGE=10;//Defining the range as global variable
//Defining a function which indicates when a duplicate value is entered
int duplicate(int A[],int d,int n)
{
 int i,f=0;
  if(n==0)
   return 0;
  else{
   for(i=0;i<n;i++)
   {
    if(d!=A[i])
     f++;
   }
   if(f==n)
    return 0;
   else 
    return -1;
  }
}
//declaring the main function
int main()
{
 int A[100],B[RANGE],C[100],d,n=0,e,f,j,i;//declaring the variables and arrays
  for(i=0;i<100;i++)
  {
   scanf("%d",&d);//first scanning an element from the console
   e=duplicate(A,d,n);//checking whether the element is not a duplicate
   if(d>=0 && d<=RANGE && e==0)//given conditions
    A[n++]=d;//assigning the scanned value to the array A when all the conditions are satisfied
   else
    break;//exiting the loop if any of the conditions fails
  }
//for creating the Array B
  for(i=0;i<=RANGE;i++)
  {
   f=0;
   for(j=0;j<n;j++)
   {
    if(A[j]<=i)
     f++;
   }
   B[i]=f;
  }
//outputing the array B
  for(i=0;i<=RANGE;i++)
   printf("\nB[%d] = %d",i,B[i]);
//for sorting the array A using array B
  i=0;
  for(j=0;j<=RANGE;j++)
  {
   if((B[j+1]-B[j])==1)
    C[i++]=j+1;
  }
//outputing the array C
  printf("\nThe Sorted Version of A is:");
  for(i=0;i<n;i++)
   printf("\n %d",C[i]);
 return 0;
}
