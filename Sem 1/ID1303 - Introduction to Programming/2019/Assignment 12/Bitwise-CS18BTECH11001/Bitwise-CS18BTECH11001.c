#include<stdio.h>
int hamming_dist(int a,int b){  //function which takes arguments a,b for calculating hamming distance
    int c=0,d=a^b;              //The Hamming distance is obtained by calculating no. of ones in the Bitwise XOR of two numbers
    while(d>0){                 //for iterating each bit
        c+=d%2;                 //calculating number of 1 by asumming all the bits as sum with 0 is same number 
        d=d/2;                  //for the next bit
    }
    return c;                   //returning the thus obtained count
}
int main(void){
    int a,b,flag=0; 
    do{
        if(flag==1)             //if the loop runs more than one time representing error
            printf("Error!!.Entered Number must be between 0 and 1024.Please Enter Numbers Again \n");
    printf("Enter two Numbers : ");
    scanf("%d%d",&a,&b);        //taking inputs from user
    flag=1;                     //changing flag which represents that the loop has run atleast one time
    }while(a<1 || a>1023 || b<1 || b>1023);//the loop should run until user anter valid inputs
    printf("The Hamming Distance is : %d\n",hamming_dist(a,b));//outputting result
}