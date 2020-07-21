#include<stdio.h>
#include<string.h>//for the use of strlen() function
void rev(char* s,int len){//recursive function
    if(len!=0){//condition to exit such that all the values have been printed in reverse order
        rev(s+1,len-1);//recursive call
        printf("%c",*s);//printing in reverse order
    }
}
int main(void){
    char s[100];//for storing the string
    fgets(s, sizeof s, stdin);//for taking input which stops when entered to a new line
    int l=strlen(s)-1;//fgets stores last element as \n.so the actual length of the string would be length -1
    if(l==0) //if empty string is entered
        puts("Error : NULL string is given as input");
    else if(l>10)//if more than 10 characters are entered
        printf("Error : The input string should not be more than 10 characters.\n");
    else{
        rev(s,l);//calling the function to print in reverse order
        printf("\n");
    }
}