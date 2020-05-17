#include<stdio.h>
#include<time.h>
unsigned long long int fab(int n)//declaring fibonacci function
{
unsigned long long int first=0,second=1,fab,i;
if(n<=1)
fab=n;//defining that fab=0 for n=0,fab=1 for n=1
for(i=0;i<n-1;i++)
{
fab=first+second;
first=second;
second=fab;
}
return fab;//returning the fabinocci number
}
int main()
{
unsigned long long int j;
int n;
scanf("%d",&n);//asking the value of n
clock_t start,end;
start=clock();//starting the time of compilation
j=fab(n);//performing the fibonacci function
printf("f(%d) = %llu\n",n,j);//printing the output
end=clock();//ending the time for compilation
double t = (double)(end - start);//assigning the time of compilation to a variable
t/= CLOCKS_PER_SEC;
printf("The time taken for finding %dth fibinocci number is : %lf\n",n,t);//printing the time for compilation
return 0;
}
