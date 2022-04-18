//Write a program to sum of two numbers using pointer

#include<stdio.h>

int main(){
	int num;
	int *ptr1,*ptr2,first,second;
	
	printf("ENTER THE FIRST NUMBER: ");
	scanf("%d",&first);
	
	printf("ENTER THE SECOND NUMBER: ");
	scanf("%d",&second);
	
	ptr1 = &first;
	ptr2 = &second;
	
	num = *ptr1+*ptr2;
	printf("SUM = %d",num);
	return 0;
}
