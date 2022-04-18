#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("file.txt","r");
	if(fp==NULL){
		printf("\nTHE FILE IS NOT OPEN");
	}
	int count = 0;
	while(getc(fp)!=EOF){
		count++;
	}
	printf("\n%d bytes: ",count);
}
