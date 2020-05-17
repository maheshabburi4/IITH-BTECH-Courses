#include<stdio.h>
#include<stdlib.h>

struct node
{
   int num;
   struct node* nextptr;
}*stnode;//declaring the global structure for the start node

int small(struct node* tmp)//small function for finding the smallest element in the list
{
   int min;
   struct node* temp;
   if(tmp == NULL)//if the list is empty
   {
      printf(" List is empty\n");
      exit(0);
   }
   else
   {
      temp = tmp;
      min=temp->num;
      while(temp != NULL)
      {
         if(min>temp->num)
            min=temp->num;
  	 temp=temp->nextptr;
      }
   }
   return min;
}

int first(struct node* tmp)//first function for findingthe first mem larger than mean
{
   int sum=0,fst,n=0,i=0;
   double mean;
   struct node* temp;
   if(tmp == NULL)
   {
      printf(" List is empty\n");
      exit(0);
   }
   else
   {
      temp = tmp;
      while(temp != NULL)
      {
         sum = sum +temp->num;
         temp=temp->nextptr;
         n++;
      }
      mean =sum/n;
      temp=tmp;
      while(temp != NULL)
      { 
         i++;
  	 if(temp->num > mean)
  	 {
    	    fst = temp->num;
            break;
         }
         if(i>n)
         {
            fst = 0;
         }
         temp = temp->nextptr;
      }
   }
   return fst;
}

int main() 
{
   struct node *fnnode, *temp;
   int num,i=0,sml,fst,sum=0,n;
   stnode = (struct node*)malloc(sizeof(struct node));
   if(stnode == NULL)
   {  
      printf("Memory cannot be allocated");
   }
   else
   {
      scanf("%d",&num);
      if(num >= 0)
      {
         temp=stnode;
         temp->num = num;
         temp->nextptr = NULL;      
         i++;
      }	
      else
         stnode = NULL;//if the first given element is negative exiting the compiling
      while(i>0)
      { 
         fnnode = (struct node*)malloc(sizeof(struct node));
         if(fnnode == NULL)
	 {  
     	    printf("Memory cannot be allocated");
  	 }
         else
         {
	    scanf("%d",&num);
            if(num >= 0)
            {
	       fnnode->num = num;
	       fnnode->nextptr = NULL;
	       temp->nextptr = fnnode;
	       temp = temp->nextptr;
	       i++;
            }
	    else
	       i=0;
        }
     }  
   }
   printf("The smallest element in the given linked list is %d\n",small(stnode));
   fst=first(stnode);
   if(fst != 0)
      printf("The first element in the linked list that is strictly greater than mean is %d\n",fst);
   else 
      printf("All Elements are equal.So no element exist greater than the mean\n");  
   return 0;
} 














