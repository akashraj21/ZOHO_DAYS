/*Write a program in c to search an element from an array by linear search method.*/

#include<stdio.h>
int FindValue(int [],int);

int FindValue(int arr[],int n){
    int find;
    int k;
    printf("\nWhich Number You Want To Find\n");
    scanf("%d",&find);
    
    for(k=1;k<=n;k++)
        if(arr[k]==find)
         break;
    if(k<n){
        printf("Element Found At %d",k);
    }
    else{
        printf("Element Not Found");
    }
}
int main(){
    int arr[10];
    int n;
   
    
    printf("ENTER THE SIZE OF AN ARRAY\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    FindValue(arr,n);
    return 0;
}
