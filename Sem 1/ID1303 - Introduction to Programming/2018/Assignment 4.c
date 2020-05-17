//Sorting the numbers using quick sort


                        //Quick Sort
#include<stdio.h>
//let us define a function for swapping two numbers
void swap(float *p,float *q)//i used pointers to specify the particular address
{
  float temp;//let define a temporary variable
  temp=*p;
  *p=*q;
  *q=temp;
}
//let us define a calling function for sorting the numbers
//let us include the decimal values also by using float data type
int sort(float a[],int p,int r)
{
  float x=a[r];//let x be the pivot
  int i=(p);//i be the indicator
  int j;//j be the current value
  for(j=p;j<=r-1;j++)
  {
    if(a[j]<=x)
    {
/*if the current value is smaller than the pivot value then we will swap the current value with
 the indicator value and increase the indicator value by one*/
      swap(&a[i],&a[j]);
        i++;
    }
  }
  //after all we have to swap the current indicator value with the pivot value
  swap(&a[i],&a[r]);
  return (i);
}
//let us define a function to implement quick sort
void quick_sort(float a[],int p,int r)
{
  int q;
  if(p<r)
  {
  q=sort(a,p,r);//the called value of the sort function
  quick_sort(a,p,q-1);//again calling the quick sort function for the rearranged less than pivot value array
  quick_sort(a,q+1,r);//again calling the quick sort function for the rearranged higher than pivot value array
  }
}
int main()
{
  float a[100];
  int n,i,j;
  printf("Enter the no. of elements to be entered:");
 scanf("%d",&n);//reading the no.of elements in the run time
 printf("Enter the elements to be sorted:\n");
 for(i=0;i<n;i++)
 {
  printf("Enter number %d :",i+1);
  scanf("%f",&a[i]);//reading the element values in the run time
 }
 quick_sort(a,0,n-1);//calling the quick sort function in the main function
 printf("The ascending order of given elements is:\n");
 for(j=0;j<n;j++)
 printf("%f\t",a[j]);//printing the rearranged order of the given elements
 return 0;
}