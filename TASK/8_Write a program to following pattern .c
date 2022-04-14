/*Write a program to following pattern*/    

#include<stdio.h>
int PrintPattern(int ,int );
int main(){
    int n;
    printf("ENETR THE VALUE OF N\n");
    scanf("%d",&n);
    int count=1;
    PrintPattern(n,count);
    return 0;
}
int PrintPattern(int n,int count){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;--j){
            printf(" ");
        }
        for(int k=1;k<i;k++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
        
    }
    return 0;
}
