//C program to input and print array elements using pointers

#include<stdio.h>
int getvalues(int arr[]){
	int value;
	printf("\nEnter number of elements - ");
	scanf("%d",&value);
	for(int i=0;i<value;i++){
		printf("\nEnter the value %d - ",i+1);
		scanf("%d",&arr[i]);
	}
}
int printvalues(int arr[]){
	for(int i=0;arr[i]!='\0';i++){
		printf("Array %d element %d\n",i+1,arr[i]);
	}
}
int main(){
	int arr[40]={0};
	getvalues(arr);
	printvalues(arr);
}
