/*C Program to Convert text of File to LowerCase*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void lcase();

int main(){
    char word[50];
    printf("\n Enter the Wrod : ");
    scanf("%s",word);
    
    FILE *fp;
    fp=fopen("Lower.txt","w");
    
    fputs(word,fp);
    fclose(fp);
    lcase();
}
void lcase(){
    FILE *f1,*f2;
    char word[30];
    f1=fopen("Lower.txt","r");
    f2=fopen("OutPut.txt","w");
    
    fgets(word,30,f1);
    int len=strlen(word);
    for(int i=0;i<len;i++){
        if(word[i]>=65 && word[i]<=90){
            fputc(word[i]+32,f2);
        }
        else{
            fputc(word[i],f2);
        }
        
    }
    fclose(f1);
    fclose(f2);
}
