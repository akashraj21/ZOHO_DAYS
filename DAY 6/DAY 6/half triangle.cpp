//Write a c program to following pattern:
//                          *
//                          * *
//                          * * *
//                          * * * *


#include<stdio.h>

int main(){
	
	int row;
	printf("ENTER THE ANY NUMBER: ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
}
