// C Program to Replace First Letter with Capital Letter
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char word[50];
	printf("Enter the Word");
	gets(word);
	int first=0;
	for(int i=0;i<strlen(word);i++){
		if(first==0){
			printf("%c",word[i]-32);
			first++;	}
		else if(word[i]==' '){
			first=0;
			printf(" ");
		}
		else{
			printf("%c",word[i]);
		}
	}
	
}
