//write a C program to count number of characters in file 

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	FILE *fp;
	fp = fopen("file.txt","r");
	if(fp==NULL){
		printf("This file is not found");
	}
	int count = 0;
	while(getc(fp)!=EOF){
		count++;
	}
	fclose(fp);
	printf("%d characters in this file",count-1);
	getch();
}
