#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	int check;
	printf("Enter the string");
	scanf("%s",str);
	int len=strlen(str)-1;
	for(int i=0;i<len;i++){
			if(str[i]!=str[len]){
				check=1;
				break;
			}
			len--;	
		}
		if(check){
			printf("%s is NOT PALINDROME",str);
		}
		else{
			printf("%s is PALINDROME",str);
		}
		
	}

