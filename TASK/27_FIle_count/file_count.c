#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	FILE *fp;
	fp = fopen("count.txt","r");
	if(fp==NULL){
		printf("file not loaded");
	}
	int count = 0;
	while(getc(fp)!=EOF){
		count++;
	}
	fclose(fp);
	printf("%d characters",count-1);
	getch();
}
