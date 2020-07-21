//including standard input and output header file for the printf and scanf functions
#include<stdio.h>
//as there are no prearguments to be given in the terminal we declared argument type as void
int main(void){
	int a,b;//declaring two integers for storing the 2 operands
	char c;//declaring a character to store the operation to be performed
	long d;//declaring a long variable to store bigger values
	scanf("%c%d%d",&c,&a,&b);//taking data from the terminal 
	if(c=='+'){//checking whether given input is + or not
		d=(long)a+b;//performing Addition
		printf("Addition\n%ld\n",d);//printing the result on the terminal
	}
	else if(c=='-'){//checking whether given input is - or not
		d=(long)a-b;//performing Substraction
		printf("Substraction\n%ld\n",d);//printing result on the terminal
	}
	else if(c=='*'){//checking whether given input is * or not
		d=(long)a*b;//performing multiplication
		printf("Multiplication\n%ld\n",d);//printing result on terminal
	}
	else{//checking the left over case(i.e., / case)
		if(b==0)//if thedivisor is 0 we have to print Error
			printf("Division\nError\n");
		else{
			double e=(double)a/b;//performing divsion
			printf("Division\n%.10g\n",e);//printing result on terminal
		} 
	}
	return 0;//as we have taken a return type as int we return 0 if the program is executed succesfully
}