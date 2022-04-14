/*Write a c program to following pattern*/ 

#include<stdio.h>
int printPattern(){
    for(int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    printPattern();
    return 0;
}
