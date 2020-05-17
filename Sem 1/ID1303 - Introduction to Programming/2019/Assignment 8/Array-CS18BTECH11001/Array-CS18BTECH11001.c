#include<stdio.h>
#include<limits.h>
void scanArray(int a[],int i){//function for taking input from user 
	printf("Enter elements into Array %d :\n",i);
	int flag;//considering a flag value to denote whether a duplicate element is present or not
	for(int i=0;i<10;i++){//as there are 10 inputs
		do{ 
			flag=0;//initially the flag is set to 0 for each input
			scanf("%d",&a[i]);//taking the input
			for(int j=0;j<i;j++){//loop starting with 0 to the previous entered element
				if(a[i]==a[j]){//checking whether the given input matches with previously entered input or not
					flag=1;//if it is previously entered I change the value of flag
					printf("Error!...Please enter unique element ");//ask the user to enter unique element
					break;//exit the for loop as the duplicate element is found.
				}
			}
		}while(flag==1);//checking whether the given input is duplicate or not.if duplicate have to process again.
	}
}
void printArray(int a[],int size){//funtion for printing the array
	if(size==0)//as there are no elements we print null
		printf("NULL");
	else{
		for(int i=0;i<size;i++){
			if(i!=size-1)//to avoid the comma after the last element and insert a new line i used this condition 
				printf("%d,",a[i]);
			else
				printf("%d\n",a[i]);
		}
	}
}
int unionSet(int a[],int b[],int c[]){//function for calculating union
	for(int i=0;i<10;i++)//as all the elements in the first array(a[]) are distinct and will be present in the union array(c[])
		c[i]=a[i];
	int size=10;//as all the 10 elements of first array(a[]) are considered into union array the size of union array(c[]) as of now is 10
	for(int i=0;i<10;i++){//for elements in b[]
		int flag=0;//for each element in b[],I set the consider a variable flag which represent whether the element b[i] is present in the a[] or not
		for(int j=0;j<10;j++){//for elements in a[] 
			if(b[i]==a[j]){//checking whether the element b[] is present in a[] or not
				flag=1;//changing the flag value if already present
				break;//exiting the loop as duplicate element is found
			}
		}
		if(flag==0)//if the element b[i] is not duplicate then it is added into union array
			c[size++]=b[i];//updating the size and adding the non duplicate element into union array
	}
	return size;//returning the size of union array(c[])
}
int intersectionSet(int a[],int b[],int c[]){//function for calculating intersection 
	int size=0;//initially there are no elements
	for(int i=0;i<10;i++){//for the elements in a[]
		for(int j=0;j<10;j++){//for the elements in b[]
			if(a[i]==b[j]){//checking whether the elements are equal or not.if equal it is a common element of both the arrays
				c[size++]=a[i];//adding the common elements to the intersection array(c[]) and updating the size of intersection array
				break;//if the common element is found we exit the loop as there are at max one element in b[] matching with one element in a[] as the elements in both arrays are distinct 
			}
		}
	}
	return size;//returing the size of intersection array
}
void computation(int a[],int size){//function for caculating Largest and second largest element
	if(size==0)//if there are no elements the largest and second largest elements are NULL
		printf("First Largest Element = NULL\nSecond Largest Element = NULL\n");
	else if(size==1)//if there is only one element the Largest element exits and equal to the same element but the second Largest element will be NULL
		printf("First Largest Element = %d\nSecond Largest Element = NULL\n",a[0]);
	else{
		int max=INT_MIN,secMax=INT_MIN;//initializing both the max to minimum value possible for int datatype. these are the predefined values included in limit.h header file
		for(int i=0;i<size;i++){//for iterating whole array
			if(max<a[i]){//if max is less than any element
				secMax=max;//we update the second max to the present max 
				max=a[i];//and present max to the element
			}
			else if(secMax<a[i])//if the element is in between first max and second max
				secMax=a[i];//we update the second max to that element
		}
		printf("First Largest Element = %d\nSecond Largest Element = %d\n",max,secMax);//outputting the largest and second largest element
	}
}
int main(void){
	int a[10],b[10],c[20],d[10],uSize=0,iSize=0;//declaration for Array 1,Array 2,Union array,Intersection array,Union array size(max possible=20),Intersection array size(max possible =10)
	scanArray(a,1);//taking input to the Array 1
	scanArray(b,2);//taking input to the Array 2
	uSize=unionSet(a,b,c);//Updating Union Array(c[]) and finding size of union array
	iSize=intersectionSet(a,b,d);//Updating Intersection Array(d[]) and finding size of Intersection array
	printf("Union : ");
	printArray(c,uSize);//outputting Union array
	printf("\nIntersection : ");
	printArray(d,iSize);//outputting Intersection Array
	printf("\n\nUnion Computation :\n");
	computation(c,uSize);//outputting largest and second largest elements in Union array
	printf("\nIntersection Computation :\n");
	computation(d,iSize);//outputting largest and second largest elements in Intersection array
	return 0;
}