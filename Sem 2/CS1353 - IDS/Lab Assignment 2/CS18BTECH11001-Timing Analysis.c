#include<stdio.h>//including the standard input and output files
#include<time.h>//including time functions
#include<stdlib.h>//including the random function
void lin(int a[],int n)//passing the no of elements in the array as an argument
{
  int i,s;
 
 s=a[n-1];//giving the search elements as the last element
 for(i=0;i<n;i++)
 {
     if(s==a[i])//searching the last element
        break;
 }
}
int main()
{
int n=2,j,i,a[100000];
clock_t start,end;
 start=clock();//starting the time of compilation
for(j=0;j<15;j++)
{
  printf(" The array size is : %d\n",n);
for(i=0;i<n;i++)
 {
     srand(time(0));
     a[i]=rand();//giving random values for the elements in the array
 }
lin(a,n);//performing linear search function
end=clock();//ending the time for compilation
double t = (double)(end - start);//assigning the time of compilation to a variable
t/= CLOCKS_PER_SEC;
printf("The time taken for %d numbers is : %lf\n",n,t);//printing the time for compilation
n=n*2;
}
    return 0;
}
