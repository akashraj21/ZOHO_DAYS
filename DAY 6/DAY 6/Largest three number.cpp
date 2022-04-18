//Largest among three numbers using nested if statement
#include<stdio.h>

int main(){
	int num1,num2,num3;
	
	printf("\nENTER THE FIRST NUMBER: ");
	scanf("%d",&num1);
	printf("\nENTER THE SECOND NUMBER: ");
	scanf("%d",&num2);
	printf("\nENTER THE THIRD NUMBER: ");
	scanf("%d",&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("\n %d is largest number",num1);
		}
	}else if(num2>num3){
		if(num2>num1){
			printf("\n %d is largest number",num2);
		}
	}else{
		printf("\n %d is largest number",num3);
	}
}
