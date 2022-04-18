/* 36. C Program to read a text from the user and find vowels, consonants and digits and 
write them in different files(vowels.txt, consonants.txt, digits.txt).*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void wordseparated();
int main(){
	char word[20];
	FILE *fptr;
	fptr=fopen("word.txt","w");
	printf("Enter the word to store in file\t");
	scanf("%s",word);
	fputs(word,fptr);
	fclose(fptr);
	wordseparated();
	
	return 0;
}

void wordseparated(){
	char word[20];
	FILE *fvowel,*fconsonants,*fdigits,*fwords;
	fwords=fopen("word.txt","r");
	fvowel=fopen("Vowels.txt","w");
	fconsonants=fopen("Consonants.txt","w");
	fdigits=fopen("digits.txt","w");
	fgets(word,20,fwords);
	
	
	for(int i=0;i<strlen(word);i++){
		if(word[i]>='0'&&word[i]<='9'){
			fputc(word[i],fdigits);
		}
		else if(word[i]=='a'|| word[i]=='e'|| word[i]=='i'|| word[i]=='o'||word[i]=='u')
			fputc(word[i],fvowel);
		else
		fputc(word[i],fconsonants);
	}
	
	fclose(fwords);
	fclose(fvowel);
	fclose(fconsonants);
	fclose(fdigits);
}
