//C program to copy one array to another using pointers

#include<stdio.h>

int copy(int *array){
	printf("\nThe elements are - ");
	for(int i=0;array[i]!='\0';i++){
		printf("%d ",array[i]);
	}
}

int main(){
	int value,arr[30],*arr1;
	printf("\nEnter number of elements - ");
	scanf("%d",&value);
	for(int i=0;i<value;i++){
		printf("\nEnter the value %d - ",i+1);
		scanf("%d",&arr[i]);
	}
	arr1=arr;
	copy(arr1);
}
