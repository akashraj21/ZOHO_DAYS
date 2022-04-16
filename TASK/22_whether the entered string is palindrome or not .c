/*Write a program to check whether the entered string is palindrome or not*/
#include<stdio.h>
#include<string.h>
#define SIZE 100
void FindPalindrome(char word[SIZE],int len){
    int flag=0;
    for(int i=0;i<len;i++){
        if(word[i]!=word[len-i-1]){
            flag=1;
        break;
        }
    }
    if(flag==0){
        printf("%s is..PALINDROME...",word);
    }
    else{
        printf("%s is..Not a Palindrome",word);
    }
}
void main(){
    char word[SIZE];
    
    printf("ENTER THE WORD..\n");
    scanf("%s",word);
    int len=strlen(word);
    FindPalindrome(word,len);
}
