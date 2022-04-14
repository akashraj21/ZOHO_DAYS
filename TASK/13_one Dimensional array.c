/*Write a program to take input of 10 elements, store and display it using one Dimensional array */
#include<stdio.h>
int printArr(int [] ,int);
int main(){ 
    int arr[20];
    int n;
    printf("Enter How Many Element You Want\n");
    scanf("%d",&n);
    printArr(arr,n);
    return 0;
}
int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Print Entered Array Values are: \n");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]");
}
