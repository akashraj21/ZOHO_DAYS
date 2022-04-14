/*Write a program to swap two numbers using call by address*/
#include<stdio.h>
int Swap(int *,int *);
int main(){
    int a,b;
    printf("Enter the Two Numbers");
    scanf("%d %d",&a,&b);
    printf("BEFORE SWAP\n A:%d B%d",a,b);
    Swap(&a,&b);
    printf("\nAFTER SWAP\n A:%d B:%d",a,b);
    return 0;
}

int Swap(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}

/*Write a program to swap two numbers using call by value and call by address*/

#include<stdio.h>
int Swap(int,int);
int main(){
    int a,b;
    printf("Enter the Two Numbers");
    scanf("%d %d",&a,&b);
    printf("BEFORE SWAP\n A:%d B%d",a,b);
    Swap(a,b);
    return 0;
}

int Swap(int n1,int n2){
    int temp=n1;
    n1=n2;
    n2=temp;
    printf("\nAFTER SWAP\n A:%d B:%d",n1,n2);
}
