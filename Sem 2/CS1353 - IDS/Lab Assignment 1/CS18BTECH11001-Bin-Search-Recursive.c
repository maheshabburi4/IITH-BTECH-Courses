#include <stdio.h>//header file which includes functions of input and output
int binary(int [],int ,int,int);
int main()//main function
{
  int a[100],i,n,s,f,l;//declaring an array
  printf("Enter the number of elements :");//asking the user for no. of numbers
  scanf("%d",&n);//scanning the input given by user
  printf("Enter the elements sorted in ascending order:\n");//asking user to enter the elements
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);//scanning the elements into the array
  }
  printf("Enter the search element :\n");//asking the user for search element
  scanf("%d",&s);//scanning the search element
  l=n-1;
  f=0;
  binary(a,s,f,l);
  return 0;
}
int binary(int a[],int s,int f,int l)
{
    int mid=(f+l)/2;
  while(s!=a[mid]&&(f<=l))
  {
     if(s<a[mid])//checking the mid element with search element
      {
          return binary(a,s,f,mid-1);//giving the last element as mid-1
      }
      else
      {
          return binary(a,s,mid-1,l);//giving the first element as mid+1
      }
      mid=(f+l)/2;//defining mid
  }
   if(s==a[mid])
    {
          printf("The element %d is found at element number %d",s,mid+1);
    }
   else
    {
      printf("The element %d is not found",s);
    }
    return 0;
}
