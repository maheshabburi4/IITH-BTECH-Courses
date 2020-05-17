//Implement merge sort  

                                             //Merge Sort
#include <stdio.h>
//let us include decimal values also for the sorting
void mergeSort(float [], int, int, int);
//the first int is for the first number in the array
//the second int is for the mid number in the array
//the third int is for the last number in the array
void partition(float [],int, int);
int main()
{
    float a[50];
    int i,n;
    printf("Enter the number of elements to be sorted : ");
    scanf("%d",&n);//reading the number of elements in the run time
    printf("Enter the elements to be sorted : \n");
    for(i=0;i<n; i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%f",&a[i]);//reading the elements in the run time
    }
    partition(a, 0,n- 1);
    //as array start with 0th element and end with n-1th element
    printf("The ascending order of the given elements is : \n");
    for(i = 0;i <n; i++)
         printf("%f\t",a[i]);//printing the elements after sorting
   return 0;
}
void partition(float a[],int low,int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;//estimating the mid value as an average of the first and last element
//partition of the array into half up to required value(mid) and processing next by giving the mid to high number in the resulted array
        partition(a, low, mid);
//considering the next half and making the next element as the low and the last element as the high
        partition(a, mid + 1, high);
        mergeSort(a, low, mid, high);
    }
}
void mergeSort(float a[],int low,int mid,int high)
{
    int i, mi, k, lo;
    float temp[100];//let us consider a temporary array
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (a[lo] <= a[mi])
        {
            temp[i] = a[lo];
            lo++;
        }
        else
        {
            temp[i] = a[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = a[k];
             i++;
        }
    }
    for (k = low; k <= high; k++)
        a[k] = temp[k];
}