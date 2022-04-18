/*Write a c program to perform string manipulation by Using library function.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int getDetials();

int getDetials(){
    char a[50];
	char b[30];
	int flag=0;
	printf("Enter The String of a");
	scanf("%s",a);
	printf("Enter The String of b");
	scanf("%s",b);
	char c[30];
	printf("\nstring Length %ld",strlen(a));
	/*printf("\nstring reverse %s",strrev(a));*/
	printf("\nstring copy %s",strcpy(c,a));
	if(strcmp(a,b)){
	    printf("Equal String");
	}
	else{
	    printf("Not Equal");
	}
	printf("\nstring concatination %s",strcat(a,b));
	return 0;
}
int main(){
	getDetials();
	return 0;
}
