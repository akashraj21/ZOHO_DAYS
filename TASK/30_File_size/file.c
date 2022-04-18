#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("text.txt","r");
	if(fp==NULL){
		printf("\n file not loaded");
	}
	int c= 0;
	while(getc(fp)!=EOF){
		c++;
	}
	printf("\n%d bytes: ",count);
}
