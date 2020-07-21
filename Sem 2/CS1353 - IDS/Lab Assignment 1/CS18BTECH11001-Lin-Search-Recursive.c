#include <stdio.h>//header file which includes functions of input and output
int linear(int [],int,int);//declaring the linear function
int main()//main function
{
  int a[100],i,n,s,j;//declaring an array
  printf("Enter the number of elements :");//asking the user for no. of numbers
  scanf("%d",&n);//scanning the input given by user
  printf("Enter the elements :\n");//asking user to enter the elements
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);//scanning the elements into the array
  }
  printf("Enter the search element :\n");//asking the user for search element
  scanf("%d",&s);//scanning the search element
  j=linear(a,n,s);//calling the linear function
  if(j==0)
  {
      printf("The element %d is not found ",s);//giving user info that the element is not found
  }
  else
  {
      printf("The element %d is found at element number %d",s,j);//giving the info that the element is found
  }
}
int linear(int a[],int n,int s)//defining the linear function
{
    int i,j=0;//declaring j as indicator
   for(i=0;i<n;i++)
   {
      if(a[i]==s)//comparing the search element with elements in the array
      {
         j=i+1;//indicating that the element is found
         break;//exiting the loop as the element is found
      }
  }
    return j;//returning the indication whether found or not found
}
