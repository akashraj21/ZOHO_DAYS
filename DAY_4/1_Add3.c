#include<stdio.h>
#include<stdlib.h>
void  add3(char string1[]){
	FILE *fp=fopen("FILE1.text","r");
	char string2[100];
	fgets(string2,100,fp);
	for(int j=0;j<100;j=j+2){
		string2[j]='3';	
	}
	printf("\n");
	FILE *cp=fopen("FILE2.text","w");
	fputs(string2,cp);
	fclose(fp);
	fclose(cp);
}
int main(){
	FILE *fp=fopen("FILE1.text","w");
	char string1[100];
	printf("Enter the Any text : ");
	scanf("%s",string1);
	fputs(string1,fp);
	
	fclose(fp);
	add3(string1);
}
