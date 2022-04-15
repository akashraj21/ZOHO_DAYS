/*Write a program in c to find the maximum number between two numbers using a Pointers*/
#include <stdio.h>
int CheckMax(int *,int *);
int main()
{
    int F_number,S_number;
    int *ptr,*ptr1;
    ptr=&F_number;
    ptr1=&S_number;
    printf("Enter Two Numbers\n");
    scanf("%d %d",&F_number,&S_number);
    CheckMax(&F_number,&S_number);
    return 0;
}
int CheckMax(int *ptr,int *ptr1){
    if(*ptr>*ptr1){
        printf("%d IS MAXIMUM",*ptr);
    }
    else{
        printf("%d IS MAXIMUM",*ptr1);
    }
    return 0;
}
