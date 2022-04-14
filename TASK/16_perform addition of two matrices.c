/*Write a program in c to perform addition of two matrices.*/
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],sum[10][10];

    int r,c;
    printf("Enter row and col size:\n");
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nADDITION OF TWO MATRIX\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("SUM OF TWO MATRIX : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
