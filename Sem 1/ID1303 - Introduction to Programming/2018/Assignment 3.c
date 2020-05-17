//Implement program to check whether given string is palindrome or not

                                 //String Palindrome
#include <stdio.h>
#include <string.h>//new header file for reversing and comparing of strings
int main()
{
  char a[100],b[100];
  printf("Enter a string to check whether it is palindrome or not:");
  //i am using gets function as scanf() function does not include the string written after space
  gets(a);//reading the entered string
  strcpy(b,a);//coping the entered string into another string
  strrev(b);//reversing the entered string
  //stricmp does not consider the alphabets whether they are in lower case or upper case.if we want to consider we use strcmp
  if((stricmp(b,a))==0)//comparing the reversed copied string with the original string.if there is no difference in the strings the differ value is zero
    printf("The given string is a palindrome string");
  else
    printf("The given string is not a palindrome string");
  return 0;
}