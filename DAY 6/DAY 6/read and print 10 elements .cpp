#include <stdio.h>

void readArray(int arr[], int size)
{
    int i =0;

    printf("\nEnter elements : \n");

    for(i=0; i<size; i++)
    {
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
}


void printArray(int arr[],int size)
{
    int i =0;

    printf("\nElements are : ");

    for(i=0; i<size; i++)
    {
        printf("\n\tarr[%d] : %d",i,arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10];

    readArray(arr,10);
    printArray(arr,10);

    return 0;
}
