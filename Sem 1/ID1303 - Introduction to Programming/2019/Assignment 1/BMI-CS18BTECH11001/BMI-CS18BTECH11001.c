//including standard input and output header file
#include<stdio.h>
//returning an int to the main function and giving no pre-arguments
int main(void){
//declaring variables to store Weight,Height,BMI(Body Mass Index)
	double W,H,BMI;
//taking input from the terminal
	scanf("%lf%lf",&W,&H);
//calculating BMI
	BMI=W/(H*H);
//printing the BMI value in a new line
	printf("\n%.4lf",BMI);
	if(BMI<=18.5)
		printf("\nUnderweight\n");
	else if(BMI<=25)
		printf("\nNormal\n");
	else if(BMI<=30)
		printf("\nOverweight\n");
	else
		printf("\nObese\n");
//returning 0 as we have taken int return type
	return 0;
}
