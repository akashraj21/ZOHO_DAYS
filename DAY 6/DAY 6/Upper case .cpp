//Program to print all uppercase alphabets from 'A' to 'Z' using a while loop.

#include<stdio.h>

int main(){
	char ch;
	ch = 'A';
	while(ch<='Z'){
		printf("%c ",ch);
		ch++;
	}
	return 0;
}
