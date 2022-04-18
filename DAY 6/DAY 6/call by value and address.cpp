/*Write a program to swap two numbers using call by value and call by address.*/

#include<stdio.h>
void call_by_address(int *val1,int *val2){
	int temp;
	temp=*val1;
	*val1=*val2;
	*val2=temp;
	printf("\n\nUSING CALL BY ADDRESS");
	printf("\n\nAfter  Swap , The value of Variable1-->%d and value of Variable2-->%d\n\n",*val1,*val2);
}
void  call_by_value(int val1 ,int val2){
	int temp;
	temp=val1;
	val1=val2;
	val2=temp;
	printf("\n\nUSING CALL BY VALUE");
	printf("\n\nAfter  Swap , The value of Variable1-->%d and value of Variable2-->%d\n\n",val1,val2);
}
	


int main(){
	int option,variable_1,variable_2;
	printf("Enter the value for Variable_1 and Variable_2\t");
	scanf("%d %d",&variable_1,&variable_2);
	printf("\n\n[1].Call by Value\n");
	printf("[2].Call by address\n");
	printf("\n\n Enter Option");
	scanf("%d",&option);
	printf("\n\nBefore Swap , The value of Variable1-->%d and value of Variable2-->%d\n\n",variable_1,variable_2);
	switch(option){
		case 1:
			call_by_value(variable_1,variable_2);
			break;
		case 2:
			call_by_address(&variable_1,&variable_2);
			break;
		default:
			printf("Enter the valid option");
			break;
	}
}
