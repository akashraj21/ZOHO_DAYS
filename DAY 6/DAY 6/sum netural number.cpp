//Write a program to find the sum of 10 natural no using 1-D array.

#include<stdio.h>

int n_number(int num){
	if(num){
		return num+n_number(num-1);
	}else{
		return 0;
	}
	
}

int main(){
	int num;
	printf("ENTER THE ANY VALUE: ");
	scanf("%d",&num);
	printf("%d",n_number(num));
	return 0;
}
