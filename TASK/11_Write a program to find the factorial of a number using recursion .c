#include<stdio.h>
long int Factorial(int);
int main(){
    int n;
    printf("Factorial Number\n");
    scanf("%d",&n);
    printf("Factorial of %d = %ld",n,Factorial(n));
    return 0;
}
long int Factorial(int n){
    if(n>1){
        return n*Factorial(n-1);
    }
    else{
        return 1;
    }
}
