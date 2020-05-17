                                                 //Merge Sort
#include <stdio.h>
void merge(int [], int, int, int);//declaring merge function
//the first int is for the first number in the array
//the second int is for the mid number in the array
//the third int is for the last number in the array
void mergeSort(int [],int, int);//declaring merge Sort function
int main()
{
    int a[10];
    int i,n=10;//declaring that the no.of input elements as 10
    printf("Enter the 10 elements to be sorted : \n");
    for(i=0;i<n; i++)
    {
        scanf("%d",&a[i]);//reading the elements in the run time
    }
    mergeSort(a, 0,n- 1);
    //as array start with 0th element and end with n-1th element
    printf("The ascending order of the given elements is : \n");
    for(i = 0;i <n; i++)
         printf("%d\t",a[i]);//printing the elements after sorting
   return 0;
}
void mergeSort(int a[],int low,int high)//defining the mergeSort function
{
    int mid;//declaring middle value
    if(low < high)
    {
        mid = (low + high) / 2;//estimating the mid value as an average of the first and last element
//partition of the array into half up to required value(mid) and processing next by giving the mid to high number in the resulted array
        mergeSort(a, low, mid);
//considering the next half and making the next element as the low and the last element as the high
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i, mi, k, lo;
    int temp[10];//let us consider a temporary array
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))//considering the normal case
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
    if (lo > mid)//if the first array is exhausted 
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = a[k];
            i++;
        }
    }
    else//if second array is exhausted
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = a[k];
             i++;
        }
    }
    for (k = low; k <= high; k++)
        a[k] = temp[k];//declaring the sorted temporary array to given array
}
