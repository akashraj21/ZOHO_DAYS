/*Write a program to following pattern*/
#include<stdio.h>
int printPattern(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("----\n");
    printf("----\n");
    for(int i=4;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){
    printPattern();
    return 0;
}
