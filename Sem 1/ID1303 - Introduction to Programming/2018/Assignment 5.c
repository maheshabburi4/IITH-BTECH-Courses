//Sorting the numbers using insertion sort

                                       //Insertion Sort
#include <stdio.h>
void insertion_sort(float a[],int n)
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
}
int main()
{
    int i,n;
    float a[100];
    printf("Enter number of numbers to be sorted :");
    scanf("%d",&n);//reading the number of elements to be entered
    for(i=0;i<n;i++)
    {
        printf("Enter number %d :",i+1);
        scanf("%f",&a[i]);//reading the elements to be sorted
    }
   insertion_sort(a,n);
    printf("The ascending order of the given elements is:\n");
    for(i=0;i<n;i++)
        printf("%4f\n",a[i]);//printing the sorted form of given numbers
    return 0;
}