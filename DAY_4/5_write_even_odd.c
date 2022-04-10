#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp1,*fp2,*fp3;
    int size,n;
    printf("ENTER A SIZE OF INTEGERS");
    scanf("%d",&size);
    fp1=fopen("Numbers.txt","w");
    fp2=fopen("Even.txt","w");
    fp3=fopen("Odd.txt","w");
    
    printf("\nENTER A INTEGERS.....\n");
    
    for(int i=0;i<size;i++){
        scanf("%d",&n);
        fprintf(fp1,"%d\n",n);
    }
    fclose(fp1);
    fp1=fopen("Numbers.txt","r");
    n=getc(fp1);
    
    while(n!=EOF){
        if(n%2==0){
            putc(n,fp2);
        }
        else if(n%2==1){
            putc(n,fp3);
        }
        n=getc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    
    return 0;
}
