//34.C Program to Convert text of File to LowerCase

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void convert_lowercase();
int main(){
	char word[30];
	printf("Enter the word");
	scanf("%s",word); 
	FILE *flower;
	flower=fopen("lowercase.txt","w");
	fputs(word,flower);
	fclose(flower);
	convert_lowercase();
}

void convert_lowercase(){
	FILE *fl ,*fp;
	char word[30];
	fl=fopen("lowercase.txt","r");
	fp=fopen("outputlowercase.txt","w");
	fgets(word,30,fl);
	
    for(int i=0;i<strlen(word);i++)
	if(word[i]>=65 &&word[i]<=90)
		fputc(word[i]+32,fp);
	else
		printf("%c",word[i]);
	fclose(fl);
	fclose(fp);	
}


