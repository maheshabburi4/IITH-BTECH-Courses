//Program to Computing the mean

						  //Mean
#include <stdio.h>
int main()
{
  int n,i;
  float a[100],mean,sum=0;//the required mean may be in decimal values
   printf("Enter the number of elements:");
   scanf("%d",&n);//reading the total number of elements to be entered
   for(i=0;i<n;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%f",&a[i]);//reading the elements into array
        //considering initial sum=0 and adding all the elements in the array using loop
        sum=sum+a[i];
    }
    //mean of the given elements is the ratio of sum of all elements to the number of elements(mean=sum of elements/number of elements)
    mean=sum/n;
    printf("The mean of the given numbers is: %f",mean);//printing the resulted mean on run time
    return 0;
}