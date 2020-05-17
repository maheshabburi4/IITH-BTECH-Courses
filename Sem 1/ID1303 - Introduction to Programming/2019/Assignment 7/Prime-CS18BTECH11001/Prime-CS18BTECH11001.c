#include<stdio.h>//including standard input/output header file for printf(),scanf().
#include<string.h>//including string header file for finding string length and comparing two strings
int sumOfPrimes(char a[],int index,int sum){//declaring a function for calculating sum of primes of given number
	if(index==0)//the recursion stops when all the 10 digits in the given number are completed with the operation 
			return sum;//as all the digits are completed we finally return the sum
	else{
		char ch=a[index-1];//as we have considered index from 1 to 10 but the index in the array are from 0 to 9,we decrease our index by 1
		if(ch=='2'||ch=='3'||ch=='5'||ch=='7')//checking if the digit is prime or not
			sum=sum+((int)ch - 48);//adding hte number by changing the character to integer using ASCII characters
		return sumOfPrimes(a,index-1,sum);//again calling the function(recursive call will happen)
	}
}
int main(void){
	char a[100];//declaring a string for storing the number.I have taken the size to be big as the entered number can be of any digits
	scanf("%s",a);//taking number from user
	if(strlen(a)!=10||a[0]=='-'||(strcmp(a,"0000000000")==0))//checking whether the number has 10 digits or not,positive or not(if negative the first character will be '-', if 0 all the characters has to be 0)
		printf("INCORRECT INPUT!! Please enter again...\n");//printing that the input is incorrect
	else
		printf("The sum of prime digits = %d\n",sumOfPrimes(a,10,0));//printing the sum by calling sumOfPrimes function
	return 0;
}