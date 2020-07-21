#include<stdio.h>
int main(void){
	int N;//declaring an variable to store the input value
	long prod=1;//declaring variable for the product
	scanf("%d",&N);//taking input from the terminal
	if(N>1&&N<=30){//checking for integer overflow for the prod variable
		int j=2;
		while(j<=N){//condition for termination of loop
			prod=prod*j;//multipling product with the new even number
			printf("%d ",j);//printing the new even number
			j=j+2;//changing value of j to next even number
		}
		printf("\n%ld\n",prod);//printing the product 
	}//end if
	else if(N==1)
		printf("\n");
	else
		printf("Error\n");//printing Error as given 
	return 0;//returning 0 as return type for main taken as int
}