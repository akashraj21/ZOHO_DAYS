//Write a program in c to find the maximum number between two numbers using a Pointers

#include<stdio.h>

int main(){
	int num;
	int first,second,*ptr1,*ptr2;
	
	printf("ENTER THE FIRST NUM: ");
	scanf("%d",&first);
	printf("ENTER THE SECOND NUM: ");
	scanf("%d",&second);
	ptr1 = &first;
	ptr2 = &second;
	
	if(ptr1>ptr2){
		printf("FIRST NUM IS MAXIMUM: ");
	}else{
		printf("SECOND NUM IS MAXIMUM: ");
	}
}
