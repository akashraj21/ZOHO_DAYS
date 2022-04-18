#include<stdio.h>
#include<string.h>

int main(){
	char a[50]="starsukki";
	char b[30]=" suganesh";
	char c[30];
	printf("\nThe length of string is %d",strlen(a));
	printf("\nThe reverse of string is %s",strrev(a));
	printf("\nThe copied is %s",strcpy(c,a));
	printf("\nIs that string is matched %d",strcmp(a,b));
	printf("\nThe concatenated string is %s",strcat(a,b));
}
