#include <stdio.h>

void details(void (*ptr)(int [], int));
void Delete_ele(int arr[],int n);

int main() 
{

    details(Delete_ele);
    return 0;
}

void details(void (*ptr)(int [], int))
{
    int n;
    int arr[100];
    
    printf("Enter the number of elements :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe elements in Array :");
    for (int i = 0; i < n; i++) {     
        printf("%d ", arr[i]);
    }
    
    ptr(arr,n);
}

void Delete_ele(int arr[], int n)
{
    int val, i;
    printf("\nEnter the Value to be deleted :");   
    scanf("%d", &val);
    
    for (i = 0; i < n; i++) {     
        if (val == arr[i])
        break;
    }
    
    for(int j = i ; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    
    n--;

    printf("\nArray after delete are :");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

}
