#include<stdio.h>
#include<time.h>
unsigned long long int fab(int n)//declaring fibonacci function
{
if(n==0)
return 0;//returning f(0)=0
else if(n==1)
return 1;//returning f(1)=1
else
return (fab(n-1)+fab(n-2));//returning the f(n)=f(n-1)+f(n-2)
}
int main()
{
int n;
unsigned long long int i;
clock_t start,end;
start=clock();
scanf("%d",&n);//asking the value of n
i=fab(n);//performing the fibonacci function
printf("f(%d) = %llu\n",n,i);//printing the output
end=clock();//ending the time for compilation
double t = (double)(end - start);//assigning the time of compilation to a variable
t/= CLOCKS_PER_SEC;
printf("The time taken for finding %dth fibinocci number is : %lf\n",n,t);//printing the time for compilation
return 0;
}

