#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book{
    
    int book_id;
    char name[20];
};
struct admin{
	char user_name[20];
	char password[10];
};
char name[20]="ADMIN";
char Pass[20]="PASSWORD";
struct user{
    
    int user_id;
    char name[20];
    int book_id;
    time_t gettime ;
    
};
struct book *b;
void Login(){
	struct admin *ad;
	int sw;
	ad=(struct admin *)malloc(sizeof(struct admin));
	
	char usr_name[20];
	char pass[20];
	
	printf("ENTER THE USERNAME: ");
	scanf("%s",ad->user_name);
	printf("\nENTER THE PASSWORD: ");
	scanf("%s",ad->password);
	/*[---------------------------------------------------------------]*/
	if(strcmp(ad->user_name,name)!=0){
		printf("INCORERCT");
	}
	else if(strcmp(ad->password,Pass)!=0){
		printf("Login SucessFull");
		/*printf("What DO Next...\n");
		printf("1_Add The Book\n2_remove the books\n3_User View\n");
		scanf("%d",&sw);
		switch(sw){
		    
		}*/
	}
	else{
		printf("Not Valid");
	}
	
}
void User(){
	struct user *st;
	int h,count;
	char ch;
	FILE* ptr;
	st=(struct user *)malloc(sizeof(struct user));
	do{
		printf("\n1_Read_Book \n2_Take_Home");
		scanf("%d",&h);
		switch(h){
			case 1:
			clrscr();
			ptr = fopen("Zoho.doc", "r");
			if (NULL == ptr){
			printf("file can't be opened \n");
			}
			printf("content of this file are \n");
			do {
			ch = fgetc(ptr);
			printf("%c", ch);
			} while (ch != EOF);
			fclose(ptr);
			default:printf("Choose Correct One");
			}
		}while(ch=0);
}

void init(){
	int ch;
	do{
		printf("\t\t\t\t\tLIBRARY MANAGEMENT SYSTEM\n");
		printf("\t\t\t________________________________________________\t\t\t\n");
		printf("\n");
		printf("\t\t\t1_Admin\n\n\t\t\t2_User\n\n\t\t\t3_Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:Login();
			break;
			case 2:User();
			break;
			case 3:exit(0);
			break;
			default:printf("Choose correct One");
		}
	}while(ch=0);
}
int main(){
	init();
	return 0;
}
