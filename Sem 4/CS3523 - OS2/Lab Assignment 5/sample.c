#include <stdio.h>
int global = 433;
int main()
{
	int local = 544;
	char ch;
	printf("&global=%p &local=%p &main=%p\n", &global, &local, &main);
	scanf("%c", &ch);
}

