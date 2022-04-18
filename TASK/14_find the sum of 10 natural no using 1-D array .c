/*Write a program to find the sum of 10 natural no using 1-D array.*/

#include <stdio.h>
int main()
{
    int n[10];
    int sum=0;
    printf("Enter the 10 Array Value...\n");
    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    printf("\n Sum Array Values...\n");
    for(int i=0;i<10;i++){
        sum=sum+n[i];
    }
    printf("/n Sum Of Array Value: %d",sum);
    return 0;
}
