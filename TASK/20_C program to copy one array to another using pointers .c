/*C program to copy one array to another using pointers*/

#include<stdio.h>
#define Max 20


int printArray(int [],int);
int printArray(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d",*(arr+i));
    }
}
int main(){
    int arr[Max],arr2[Max];
    int size,i;
    
    int *ptr=arr;
    int *ptr2=arr2;
    
    printf("Enter Size Of Array: ");
    scanf("%d",&size);
    
    printf("\nEnter Array Value:");
    for(i=0;i<size;i++){
        scanf("%d",ptr+i);
    }
    printf("\nBefore Copy...\n");
    printArray(arr,size);
    
    printf("\nAfter Copy...\n");
    for(int i=0;i<size;i++){
        *ptr2=*ptr;
        ptr++;
        ptr2++;
    }
    printArray(arr2,size);
    
}
