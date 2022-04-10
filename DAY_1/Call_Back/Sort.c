#include <stdio.h>
#include <stdlib.h>
void details(void (*ptr)());
void sort(int arr[],int n);

int main() 
{
    details(sort);
    return 0;
}

void details(void (*ptr)())
{
    int n;
    int arr[100];
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Elements of original array: \n");    
    for (int i = 0; i < n; i++) {     
        printf("%d ", arr[i]);     
    }
    
    ptr(arr,n);
}

void sort(int arr[], int n)
{
   for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] > arr[j]) {    
               int temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    } 
    
    printf("\n Sorted in ascending order: \n");    
    for (int i = 0; i < n; i++) {     
        printf("%d ", arr[i]);    
    }
}
