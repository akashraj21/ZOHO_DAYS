/*C program to input and print array elements using pointers*/
#include <stdio.h>
#define MAX 100
int PrintArrayPointer(int arr[],int n){
    int *ptr;
    int i;
    ptr=arr;
    printf("Enter the Array Elements...\n");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("Print Array Elements..\n");
    printf("[");
    for(i=0;i<n;i++){
        printf("%d ",(*ptr+i));
    }
    printf("]");
    return 0;
}
int PrintArrayPointer(int [],int);
int main()
{
    int arr[MAX],i,n;
    printf("Enter the Size Of an Array");
    scanf("%d",&n);
    PrintArrayPointer(arr,n);
    return 0;
}
