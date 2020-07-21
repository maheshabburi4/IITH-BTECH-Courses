#include <stdio.h>//header file which includes functions of input and output
int main()//main function
{
  int a[100],i,n,s,f,l,j=0,mid;//declaring an array
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
  while(f<l)
  {
      mid=(f+l)/2;
      if(s<a[mid])
      {
          l=mid-1;
      }
      else if(s>a[mid])
      {
          f=mid+1;
      }
      else
      {
          printf("The element %d is found at element number %d",s,mid+1);
          j=1;
          break;
      }
  }
  if(j==0)
  {
      printf("The element %d is not found",s);
  }
    return 0;
}
