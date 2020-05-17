#include<stdio.h>
void Addition() {//funtion for performing addition
  long a,b;//declaring variables for the operands
  printf("Enter the first number : ");
  scanf("%ld",&a);//taking first input
  printf("Enter the second number : ");
  scanf("%ld",&b);//taking second input
  printf("The result is : %ld\n\n",(a+b));//outputting result
}
void Subtraction() {//funtion for performing subtraction
  long a,b;//declaring variables for the operands
  printf("Enter the first number : ");
  scanf("%ld",&a);//taking first input
  printf("Enter the second number : ");
  scanf("%ld",&b);//taking second input
  printf("The result is : %ld\n\n",(a-b));//outputting result
}
void Multiplication() {//funtion for performing multiplication
  long a,b;//declaring variables for the operands
  printf("Enter the first number : ");
  scanf("%ld",&a);//taking first input
  printf("Enter the second number : ");
  scanf("%ld",&b);//taking second input
  long i=b;//choosing another variable for not changing the b value
  long long int result=0;//choosing another variable for result
  while(i--)//using while loop which runs for b times
    result=result+a;//adding a for each iteration
  printf("The result is : %lld\n\n",result);//outputting result
}
void Division() {//funtion for performing divison
  int a,b;//declaring variables for the operands
  printf("Enter the first number : ");
  scanf("%d",&a);//taking first input
  printf("Enter the second number : ");
  scanf("%d",&b);//taking second input
  if(b==0)//checking if divisor is zero or not
    printf("NaN(Not a Number).Second number must be positive\n");//if divisor is 0 we output error
  else{
    long i=a-b,result=0;//taking i = a-b for the floor value.for the ceil value wee take i=a.
    while(i>=0){//using while loop 
      i=i-b;
      result++;//noting the count of number of times the loop runs which gives the result
    }
    printf("The result is : %ld\n\n",result);//outputting result
  }
}
void Modulus() {//funtion for performing remainder
  long a,b;//declaring variables for the operands
  printf("Enter the first number : ");
  scanf("%ld",&a);//taking first input
  printf("Enter the second number : ");
  scanf("%ld",&b);//taking second input
  if(b==0)//checking if divisor is zero or not
    printf("NaN(Not a Number).Second number must be positive\n\n");//if divisor is 0 we output erroe
  else{
    long i=a,result=0;
    while(i>0)//iterating while loop until the i becomes negative
      i=i-b;
    while(i<0)//iterating while loop until the i becomes positive.i used while if the given integer is negative
      i=i+b;
  	result=i;
    printf("The result is : %ld\n\n",result);//outputting result
  }
}
void Square() {//funtion for performing square
  long a;//declaring variables for the operand
  printf("Enter a number : ");
  scanf("%ld",&a);//taking input number
  long long int result=0;
  long i=a;
  while(i--)//running while loop for a times
    result=result+a;//adding a for each iteration 
  printf("The result is : %lld\n\n",result);//outputting result
}
void SquareRoot(){//funtion for performing squareroot
  long a;//declaring variables for the operand
  printf("Enter a number : ");
  scanf("%ld",&a );//taking input number
  long i=1,j=1,result=0;
  while(i<=a){//taking the logic of sum of n odd integers is the square of n
    result++;//noting the count of number of times the loop runs
    j=j+2;//changing to next odd number
    i=i+j;//adding the odd number to the sum
  }
  printf("The result is : %ld\n\n",result);//outputting the result
}
void Log() {//funtion for performing logarithm
  long a;//declaring variables for the operand
  printf("Enter a number : ");
  scanf("%ld",&a);//taking input number
  long i=a,result=0;
  if(i==0){//checking if the value is 0 or not
    printf("log of 0 is Undefined.Number must be positive\n\n");//if the value is 0 then outputting error
  }
  else{
    while(i>1){//considering logic that the number of times we have to divide the number by 2 until th given number becomes 1 is the required value 
      long count=0;
      result++;//noting the count for the log value
      while(i>0){//for the division value by 2
        i=i-2;
        count++;//noting the count for the division value
      }
      i=count;//quotient when divided by 2
    }
    printf("The result is : %ld\n\n",result);//outputting the result
  }
}
int main(void) {
  while(1){
    printf("MENU :\n");
    printf("Enter the number corresponding to the operation you want to perform\n" );
    printf("1: Addition\n");
    printf("2: Subtraction\n" );
    printf("3: Multiplication\n" );
    printf("4: Division\n" );
    printf("5: Modulus\n" );
    printf("6: Square\n" );
    printf("7: Square Root\n" );
    printf("8: Log(Base : 2)\n" );
    printf("9: Exit\n" );
    int choice;
    printf("Your choice : ");
    scanf("%d",&choice);
    switch (choice) {//using switch case for matching the given choice
      case 1:
        Addition();//calling Addition
        break;
      case 2:
        Subtraction();//calling Subtraction
        break;
      case 3:
        Multiplication();//calling multiplication
        break;
      case 4:
        Division();//calling division 
        break;
      case 5:
        Modulus();//calling modulus
        break;
      case 6:
        Square();//calling square
        break;
      case 7:
        SquareRoot();//calling square root
        break;
      case 8:
        Log();//calling logarithm
        break;
      case 9:
        return 0;//exiting the application
        break;
      default:
        printf("Enter valid choice\n\n");
    }
  }
  return 0;
}