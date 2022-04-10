#include<stdio.h>

void copy(char file1[]){
	FILE *fp = fopen("orignel_file.txt","r");
	char file2[100];
	fgets(file2,100,fp);
	FILE *cp = fopen("copy.txt","w");
	fputs(file2,cp);
	fclose(fp);
	fclose(cp);
}

int main(){
	char file1[100];
	FILE *fp;
	fp = fopen("orignel_file.txt","w");
	printf("Enter the Any txt: ");
	scanf("%s",file1);
	fputs(file1,fp);
	fclose(fp);
	copy(file1);
}
