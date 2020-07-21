#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int arr3[64*1024];
int main() {
    int arr1[64*1024];
    int *arr2=(int*)malloc(64*1024*sizeof(int));
    long sz = sysconf(_SC_PAGESIZE);
    printf("page size = %ldKB\n",sz/1024);
    printf("Stack Segment \t Heap Segment \t Data Segment\n");
    
    printf("%p \t %p \t %p \n",&arr1,&arr2,&arr3);
    int c;
    scanf("%d",c);

}