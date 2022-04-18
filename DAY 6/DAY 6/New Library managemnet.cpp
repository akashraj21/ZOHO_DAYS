#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>


//int main-- 30
//admin_validation -- 70
//add_book_admin---130
struct book {
	int book_id;
	char author[20],book_name[20];
	
};
struct book library_book;
struct book check_book;
struct book display_book;

struct admin {
	struct book admin_book;
	char admin_userid[10],admin_password[10];
};

struct admin admin;

struct student {
	struct book student_book;
	char student_userid[10],student_password[10];
};
struct student_signup{
	char student_id[20];
	char student_name[20],student_department[10],password[10];
};

struct take_book{
	struct book takebook;
	char st_id[20],boook[20];
	int day,month,year;
};
struct take_book take_book;
struct student_signup stu_signup;
struct student student;


void admin_validation();
void admin_page();
void admin_add_book();
void admin_book_details();
void libraryBooks();
void admin_book_update();
void remove_book();
void user_take_book_details();

void user_home_page();
void user_signup_page();
void user_login_page();
void user_main_page(char* ,char*);
void user_take_book(char*);
void user_return_book(char*);
void fine_calculation(int,int,int,int,char*,int);



int main() {
	int option;

	do {
		printf("\n\n\t\t\t*************************************\n");
		printf("\n\t\t\t*****\tLIBRARY MANAGEMENT\t*****\n");
		printf("\n\t\t\t*************************************\n\n");

		printf("\n\t\t\t[1]--> LIBRARIAN LOGIN \n");
		printf("\n\t\t\t[2]--> USER  LOGIN  \n");
		printf("\n\t\t\t***********************************");
		printf("\n\n\n\t\t\t CHOOSE OPTION TO LOGIN\t");

		//==================================================
		scanf("%d",&option);
		switch(option) {
			case 1:
				system("cls");
				admin_validation();
				break;
			case 2:
				system("cls");
				user_home_page();
			default:
				printf("INVALID OPTION");
				getch();
				break;
		}

	} while(option!=0);

}

//=====================================================================================================================


void admin_validation() {

	int i;
	char pass;
	admin_valid:
	printf("\n\t\t\t\tWELCOME TO LIBRARIAN LOGIN PAGE");
	printf("\n\n\n\t\t\t\tEnter LOGIN ID -->\t");
	scanf("%s",admin.admin_userid);
	
	if(strcmp(admin.admin_userid,"prem")==0) {
		printf("\n\t\t\t\tEnter Password -->\t");
		fflush(stdin);
		for(i=0;i<5;i++){
			char pass=getch();
			admin.admin_password[i]=pass;
			printf("*");
		}
	admin.admin_password[i]='\0';
	getch();
		if(strcmp(admin.admin_password,"12345")==0) {
			admin_page();
		} else {
			printf("INVALID PASSWORD");
			getch();
			system("cls");
			goto admin_valid;
		}
	}
	else{
		printf("INVALID USERID");
			getch();
			system("cls");
			goto admin_valid;
	}
}
//===========================================================================================================


void admin_page(){
	
	int option;
	do{
	system("cls");
	printf("\n\n\t\t\t WELCOME TO LIBRARIAN PAGE");
	printf("\n\n\t\t\t [1].Add Book");
	printf("\n\n\t\t\t [2].Update Book details");
	printf("\n\n\t\t\t [3].Remove Book");
	printf("\n\n\t\t\t [4].User Book Details");
	printf("\n\n\t\t\t [5].Book Details");
	printf("\n\n\t\t\t [6].Mainmenu");
	scanf("%d",&option);
	switch(option){
		case 1:admin_add_book();
		break;
		case 2:admin_book_update();
		break;
		case 3: remove_book();
		break;
		case 4:user_take_book_details();
		break;
		case 5: libraryBooks();
		break;
		case 6:option=0;
		break;

		default:
			printf("Invalid Option");
			break;
	}
	
	}while(option!=0);

}
//===============================================================================================
void admin_add_book(){
	int duplicate=0,check;
	FILE *fptr;
	fptr=fopen("B.txt","a+");
	printf("Enter the Book ID ");
	scanf("%d",&check);
	while(fread(&library_book,sizeof(book),1,fptr)){
		if(check==library_book.book_id)
		duplicate++;
	}
	if(duplicate==0){
	library_book.book_id=check;
		fflush(stdin);
		printf("Enter the BOOK NAME ");
		scanf("%s",library_book.book_name);
		fflush(stdin);
		printf("Enter the BOOK Author");
		scanf("%s",library_book.author);
		
		fwrite(&library_book,sizeof(book),1,fptr);
		printf("\n\t\tBOOK ADD SUCCESSFULLY!!!!!!!!\nPlease ENTER to continue ");
		getch();}
		else{
			printf("Already exist");
			getch();
		}
	
	fclose(fptr);
}
//=================================================================================================================
void libraryBooks(){
		FILE *fp;
	fp=fopen("B.txt","r");
	printf("\n\n BOOK ID \t BOOK NAME \t\t BOOK AUTHOR\n");
	while(fread(&library_book,sizeof(book),1,fp)){
		printf("\n  %d \t\t %s \t\t %s",library_book.book_id,library_book.book_name,library_book.author);
	}
getch();
fclose(fp);

}
//================================================================================================================
void admin_book_update(){
		FILE *fp,*fp1;
		int update_id,found=0;
	fp=fopen("B.txt","r");
	fp1=fopen("temp.txt","w");
	printf("Enter  the BOOK ID to UPDATE the book");
	scanf("%d",&update_id);

	while(fread(&library_book,sizeof(book),1,fp)){
		if(library_book.book_id==update_id){
			found=1;
			printf("Enter the NEW BOOK NAME to UPDATE");
			scanf("%s",library_book.book_name);
			printf("Enter the NEW BOOK AUTHOR name to UPDATE");
			scanf("%s",library_book.author);
			
		}
		fwrite(&library_book,sizeof(book),1,fp1);
	}
	fclose(fp);
	fclose(fp1);
	if(found){
		FILE *a,*b;
		a=fopen("temp.txt","r");
		b=fopen("B.txt","w");
		while(fread(&library_book,sizeof(book),1,a)){
			fwrite(&library_book,sizeof(book),1,b);
			
		}
		fclose(a);
		fclose(b);
	}
	else{
		printf("\nBOOK ID Not exist, PLease enter the valid id to update ");
		getch();
		
	}
	
}
//==================================================================================================================

void remove_book(){
			FILE *fp,*fp1;
		int delete_id,found=0;
	fp=fopen("B.txt","r");
	fp1=fopen("temp.txt","w");
	printf("Enter  the BOOK ID to DELETE the book");
	scanf("%d",&delete_id);

	while(fread(&library_book,sizeof(book),1,fp)){
		if(library_book.book_id==delete_id)
			found=1;
		
		else
		fwrite(&library_book,sizeof(book),1,fp1);
	}
	fclose(fp);
	fclose(fp1);
	if(found){
		FILE *a,*b;
		a=fopen("temp.txt","r");
		b=fopen("B.txt","w");
		while(fread(&library_book,sizeof(book),1,a)){
			fwrite(&library_book,sizeof(book),1,b);		
		}
		printf("\n\t BOOK DELTE SUCCESSFULLY!!!!!!!\npress enter to CONTINUE");
		getch();
		fclose(a);
		fclose(b);
	}
	else{
		printf("\nBOOK ID Not exist, PLease enter the valid id to DELETE");
		getch();
		
	}
}


//==================================================================================================================
void user_home_page() {
	int i,option;
	char pass;
	do{
	
	printf("\n\t\t\t\tWELCOME TO USER LOGIN PAGE");
	printf("\n\t\t\t\t[1].LOGIN ");
	printf("\n\t\t\t\t[2].SIGNUP  ");
	printf("\n\n\t\t\t\tChoose Option  ");
	scanf("%d",&option);
	switch(option){
		case 1:
			user_login_page();
			break;
		case 2:
			user_signup_page();
			break;
		default:
			printf("\n\t\t\tEnter the valid option");
			break;
	}
	
	}while(1);
	
	
}
//======================================================================================================
void user_signup_page(){
	system("cls");
	printf("\n\n\t\t\t WELCOME TO SIGN-UP PAGE FOR USER");
	FILE *fptr;
	fptr=fopen("user_signup.dat","a");
	printf("\nEnter Your ID number  ");
	scanf("%s",stu_signup.student_id);
	fflush(stdin);
	printf("\nEnter Your Name ");
	scanf("%s",stu_signup.student_name);
	fflush(stdin);
	printf("\nEnter Your Department");
	scanf("%s",stu_signup.student_department);
	fflush(stdin);
	printf("Enter Password to Create login");
	scanf("%s",stu_signup.password);
	
	fwrite(&stu_signup,sizeof(student_signup),1,fptr);
	fclose(fptr);
}
//=======================================================================================================
void user_login_page(){
	int i, found=0;
	system("cls");
	printf("\n\n\t\t\t WELCOME TO USER PAGE");
	printf("\n\n\n\t\t\t\tEnter LOGIN ID -->\t");
	scanf("%s",student.student_userid);
	FILE *flog;
	flog=fopen("user_signup.dat","r");
	while(fread(&stu_signup,sizeof(student_signup),1,flog)){
		if(strcmp(student.student_userid,stu_signup.student_id)==0) {
		printf("\n\t\t\t\tEnter Password -->\t");
		fflush(stdin);
		for(i=0;i<strlen(stu_signup.password);i++){
			student.student_password[i]=getch();
			printf("*");
		}
	student.student_password[i]='\0';
	getch();
		if(strcmp(student.student_password,stu_signup.password)==0) {
			found=1;
			user_main_page(stu_signup.student_id,stu_signup.student_name);
		} else {
			printf("INVALID PASSWORD");
			getch();
			system("cls");
		}
	}
		
	}
	if(found==0){
	printf("INVALID USERID .If new User try to signup then Login\n\n");
	user_home_page();
}
}

	


//===========================================================================================================

void user_main_page(char id[20],char name[20]){
	int option;
	do{
	system("cls");
	printf("\n\t\t\t\tWELCOME! --- %s----",name);
	printf("\n\t\t\t\t[1].Take BOOK");
	printf("\n\t\t\t\t[2].Return BOOK");
	printf("\n\t\t\t\t[3].Library Book");
	printf("\n\t\t\t\t[4].Logout");
	printf("\n\t\t\t\tChoose Your option");
	scanf("%d",&option);
	switch(option){
		case 1:user_take_book(id);
		break;
		case 2:user_return_book(id);
		case 3:libraryBooks();
		break;
		case 4:user_home_page();
		break;
		
		default:printf("INVALID OPITON");
		break;
		
	}
	}while(1);
	getch();
}

//=============================================================================================================

void user_take_book(char *id){
struct tm *local;
time_t t;
t=time(NULL);
local =localtime(&t);
	FILE *flib,*ftake;
	int bookid;
	flib=fopen("B.txt","r");
	ftake=fopen("user_take_book.txt","a");
	printf("Enter the Book id to take the book");
	scanf("%d",&bookid);
	while(fread(&library_book,sizeof(book),1,flib)){
		if(bookid==library_book.book_id){
			take_book.takebook.book_id=library_book.book_id;
			strcpy(take_book.st_id,id);
			strcpy(take_book.takebook.book_name,library_book.book_name);
			take_book.day=local->tm_mday;
			take_book.month=local->tm_mon + 1;
			take_book.year=local->tm_year + 1900;
			fwrite(&take_book,sizeof(take_book),1,ftake);
			printf("\n\n\t\tBOOK TAKE SUCCESSFULLY!!!!!!!!!!!!!!!!!");
			printf("\n\t\tBOOK Return Within 2 days .After 2 days ,Fine amount -> $5 per day");
			getch();
		}
	}
	fclose(flib);
	fclose(ftake);
}
//=================================================================================================

void  user_take_book_details(){
	FILE *fptr;
	fptr=fopen("user_take_book.txt","r");
	printf("\n Student ID \t Book ID \t BOOK NAME \t TAKE_BOOK_TIME\n");
	while(fread(&take_book,sizeof(take_book),1,fptr)){
		printf("\n %s \t\t %d \t\t %s \t %d/%d/%d",take_book.st_id,take_book.takebook.book_id,take_book.takebook.book_name,take_book.day,take_book.month,take_book.year);
	}
	getch();
	fclose(fptr);
}
//====================================================================================================


void user_return_book(char *id){
	int return_book_id,found;
	FILE *fptr,*fptr1;
	printf("Enter the BOOK ID to return");
	scanf("%d",&return_book_id);
	fptr=fopen("user_take_book.txt","r");
	fptr1=fopen("return_temp.txt","w");
	while(fread(&take_book,sizeof(take_book),1,fptr)){
		if(strcmp(id,take_book.st_id)==0){
			if(return_book_id==take_book.takebook.book_id){
				found=1;
				int rday=0,rmonth=0,ryear=0;
				printf("Enter the return date (dd mm yyyy) ");
				scanf("%d %d %d",&rday,&rmonth,&ryear);
				fine_calculation(rday,rmonth,ryear,return_book_id,id,take_book.day);
			}
		}
		else{
			fwrite(&take_book,sizeof(take_book),1,fptr1);
		}
	}
	fclose(fptr);
	fclose(fptr1);
	if(found){
		FILE *a,*b;
		a=fopen("return_temp.txt","r");
		b=fopen("user_take_book.txt","w");
		while(fread(&take_book,sizeof(take_book),1,a)){
			fwrite(&take_book,sizeof(take_book),1,b);
		}
		printf("\n\n \t BOOK RETURN SUCCESSFULLY!!!!");
		getch();
		fclose(a);
		fclose(b);
		
		
	}
	else{
		printf("\n\t\tReturn Book id is not present");
	}	
	
} 
void fine_calculation(int rday,int month,int ryear,int returnbook_id,char *id,int takedate){
	int yearcheck;
	int returnmonth;
	if(ryear>=2000&& ryear<2099)
	 yearcheck=6;
	int year2digit=ryear%100;
	int calyear=year2digit/4;

	if(month==1){
		returnmonth=1;
	}
	else if(month==2){
		returnmonth=4;
	}
	else if(month==3){
		returnmonth=4;
	}else if(month==4){
		returnmonth=0;
	}
	else if(month==5){
		returnmonth=2;
	}
	else if(month==6){
		returnmonth=5;
	}
	else if(month==7){
		returnmonth=0;
	}
	else if(month==8){
		returnmonth=3;
	}else if(month==9){
		returnmonth=6;
	}
	else if(month==10){
		returnmonth=1;
	}
	else if(month==11){
		returnmonth=4;
	}else if(month==12){
		returnmonth=6;
	}
	int finedays=0;
	for(int i=takedate;i<=rday;i++){
	
	int finaladd=(i+returnmonth+calyear+year2digit+yearcheck)%7;
	if(finaladd !=1 && finaladd !=7 &&finaladd !=0){
		finedays=finedays+1;
	}
	}
	printf("------- Fine days %d \n",finedays);
	
	printf("------- Fine Amount  $ %d----------\n\n",finedays*5);
}


