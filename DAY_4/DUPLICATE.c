#include<stdio.h>
#include<string.h>

void duplicate(){
	char str2[100];
	int i,j,k;
	FILE *fp = fopen("duplicate.txt","r");
	fgets(str2,100,fp);
	for (i=0;i<strlen(str2);i++){
		for(j=i+1;str2[j]!='\0';j++){
			if(str2[j]==str2[i]){
				for(k=j;str2[k]!='\0';k++){
					str2[k] = str2[k+1];
				}
			}
		}
	}
	FILE *cp = fopen("remove_duplicate.txt","w");
	fputs(str2,cp);
	fclose(cp);
}


int main(){
	char str1[100];
	FILE *fp = fopen("duplicate.txt","w");
	printf("Enter the any text: ");
	scanf("%s",str1);
	fputs(str1,fp);
	fclose(fp);
	duplicate();
}
