//Write a program to following pattern
//        1
//        1 2
//        1  2   3
//        1  2   3  4
//        =======
//        1  2   3  4
//        1  2   3
//        1  2
//        1

#include<stdio.h>

int main(){
	int row;
	printf("ENTER THE ANY VALUE: ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j =1;j<=i;j++){
			printf("%d",j );
		}
		printf("\n");
	}
	printf("===========\n");
	for(int i=row;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
