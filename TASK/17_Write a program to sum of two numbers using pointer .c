/*Write a program to sum of two numbers using pointer*/
#include <stdio.h>
int printPointer(int *,int *);
int main()
{
   int a,b,*a1,*b1;
   int sum;
   printf("Enter the Values of a and b\n");
   scanf("%d %d",&a,&b);
   a1=&a;
   b1=&b;
   printPointer(a1,b1);
   return 0;
}
int printPointer(int *ptr1,int *ptr2){
    int sum=*ptr1+*ptr2;
    printf("%d",sum);
    return 0;
}
