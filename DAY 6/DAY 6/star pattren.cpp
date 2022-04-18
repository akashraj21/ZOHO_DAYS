//Write a program to following pattern
//                            1
//                          2  3
//                        4  5   6
//                     7  8   9  10

#include<stdio.h>

int main(){
	int i,j,space,row;
	printf("ENTER THE ANY VALUE: ");
	scanf("%d",&row);
	int k=1;
	for(i=1;i<=row;i++){
		for(space=1;space<=row-i;space++){
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
