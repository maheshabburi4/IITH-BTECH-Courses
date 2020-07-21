#include <stdio.h>//header file which includes functions of input and output
int main()//main function
{
  int a[100],i,n,s,j=0;//declaring an array
  printf("Enter the number of elements :");//asking the user for no. of numbers
  scanf("%d",&n);//scanning the input given by user
  printf("Enter the elements :\n");//asking user to enter the elements
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);//scanning the elements into the array
  }
  printf("Enter the search element :\n");//asking the user for search element
  scanf("%d",&s);//scanning the search element
  for(i=0;i<n;i++)
  {
      if(a[i]==s)//comparing the search element with elements in the array
      {
          printf("The number %d is found and is element number %d",s,i+1);//giving info that the element is found at which place
          j=1;//indicating that element is found
          break;//as the element is found we can exit the loop
      }
  }
  if(j==0)//indicating that the element is not found
  {
      printf("The element %d is not found",s);//giving info to user that the element is not found
  }
    return 0;
}
