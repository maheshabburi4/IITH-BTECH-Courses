#include<stdio.h>//including standard input and output library
int a[100];//declaring an array for storing
int n=-1;//let the total no.of elements in the array be n
int storeNextVehicleID(int b)//defining the storeNextVehicleID function
{ 
  int i;//a temporary variable
  if(n<100)//declaring max no.of vehicles to cross in a day as 100
  a[++n]=b;//Assigning the input value to the array
printf("\nThe no.of Vehicles Crossed upto now are: %d\nThe ID's of Elements Crossed upto now are :\n",n+1);
  for(i=0;i<=n;i++)
  {
   printf("%d\n",a[i]);//printing the ID's of vehicles crossed till now
  }
return 0;
}
int insertion_sort(int a[],int n)//sorting the considered array so that we can use the binary search which has less time complexity
{
    int i,j;
        for(i=1;i<n;i++)
    {
        j=i;//taking a temporary variable j for the value of i to be unchanged after the while loop is completed
        while(j>0&&a[j]<a[j-1])//checking whether the first number is less than the next number or not
        {//swapping the numbers if the given while condition is satisfied
            a[j]=a[j]+a[j-1];
            a[j-1]=a[j]-a[j-1];
            a[j]=a[j]-a[j-1];
            j--;
        }
    }
printf("\n\n\tThe no.of Vehicles Crossed today after sorting are: %d\n\tThe ID's of Elements Crossed today after sorting are :\n",n);
  for(i=0;i<n;i++)
  {
   printf("\t\t%d\n",a[i]);
  }
return 0;
}
int main()//declaring main function
{
  int i,b;//temporary variables
  for(i=0;i<100;i++)
  {
    scanf("\n%d",&b);//Assigning the scanned value to a temporary variable b
    if(b>0&&b<=10000)//checking whether the ID is in the given range
     {
     storeNextVehicleID(b);//performing the storeNextVehicleID function
     }
    else
    break;//exiting the scan if the given value is negative
  }
//After completion of the day let's print the total no.of vehicles passed the toll gate
printf("\n\n\tThe no.of Vehicles Crossed today are: %d\n\tThe ID's of Elements Crossed today are :\n",n+1);
  for(i=0;i<=n;i++)
  {
   printf("\t\t%d\n",a[i]);
  }
insertion_sort(a,n+1);
return 0;
}

