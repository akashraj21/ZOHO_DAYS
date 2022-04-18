#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

struct date {
	int month,day,year;
};

struct book {
	int book_id;
	char author[20];
	char book_name[100];
	struct date book_date;
} check,add,update,del,view,search;

struct user {
	int user_id;
	char name[20];
	int age;
} check_user,add_user;

struct {
	int id;
	char book_name[20];
	char user_name[20];
	struct date return_date;
	struct date takes_date;
}check_book,add_books,return_book,take_date;

int main_exit;

void admin_login();
void user_login();
void main_menu();
void close();
void user_interface();
void admin_pannel();
void add_book();
void update_book();
void delete_book();
void user_view_book();
void admin_view_book();
void search_books();
void read_book();
void book1();
void book2();
void take_books();
void singup_book();
void login_book();
void take_book_option();
void simple_view_book();
//void return_book();
//int valid_date(int day, int mon, int year);
//void calculate();

void fordelay(int j)
{
	int i,k;
	for (i=0; i<j; i++) {
		k=i;
	}
}

int main()
{
	main_menu();
	return 0;
}

void main_menu()
{
	int choice;
	printf("\n\n\t\t\t WELCOME TO LIBRARY MANAGEMENT SYSTEM");
	printf("\n\t\t[1] ADMIN\n\t\t[2] USER\n\n\t\tENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			system("cls");
			admin_login();
			break;
		case 2:
			system("cls");
			user_login();
			break;
	}
}

void close()
{
	system("cls");
	printf("\n\t\t\t Thank You!");
}

void admin_login()
{
	printf("\n\t\t\t\t ADMIN LOGIN!");
	char admin_name[50],admin[50] = "admin",admin_password[50],admin_pass[50]="pass";
	int i =0;
	printf("\n\n\t\tEnter your User name: ");
	scanf("%s",admin_name);
	if(strcmp(admin,admin_name)!=0) {
		printf("\nYour user name is invalid.");
	} else {
		printf("\n\t\tEnter your passward: ");
		for(i=0; i<4; i++) {
			admin_password[i] = getch();
			printf("%c",'*');
		}
		getch();
		admin_password[i] = '\0';
		if(strcmp(admin_password,admin_pass)==0) {
			printf("\nPassward Match!\n\nLoading");
			for(i=0; i<6; i++) {
				fordelay(100000000);
				printf(". ");
			}
			printf("\n");
			system("pause");
			system("cls");

			admin_pannel();
		} else {
			printf("\n\nYour password is invalid\n");
            account_invalid:
			printf("Enter 1 to main_menu or 0 to Exit");
			scanf("%d",&main_exit);
			if(main_exit==1) {
				system("cls");
				main_menu();
			} else if(main_exit==0) {
				close();
			} else {
				printf("\nINVALID");
				goto account_invalid;
			}
		}
	}
}

void user_login()
{
	printf("\n\t\t\t\t USER LOGIN!");
	char user_name[50],user[50] = "user",user_password[50],user_pass[50]="pass";
	int i =0;
	printf("\n\n\t\tEnter your User name: ");
	scanf("%s",user_name);
	if(strcmp(user,user_name)!=0) {
		printf("\nYour user name is invalid.");
	} else {
		printf("\n\t\tEnter your passward: ");
		for(i=0; i<4; i++) {
			user_password[i] = getch();
			printf("%c",'*');
		}
		getch();
		user_password[i] = '\0';
		if(strcmp(user_password,user_pass)==0) {
			printf("\nPassward Match!\n\nLoading");
			for(i=0; i<6; i++) {
				fordelay(100000000);
				printf(". ");
			}
			printf("\n");
			system("pause");
			system("cls");

			user_interface();
		} else {
			printf("\n\nYour password is invalid\n");
            account_invalid:
			printf("Enter 1 to main_menu or 0 to Exit");
			scanf("%d",&main_exit);
			if(main_exit==1) {
				system("cls");
				main_menu();
			} else if(main_exit==0) {
				close();
			} else {
				printf("\nINVALID");
				goto account_invalid;
			}
		}
	}
}

void user_interface()
{
	int choice;
	printf("\n\n\t\t\t\tWECOME TO USER DESBOARD\n\n");
	printf("\n\t\t[1] VIEW BOOKS\n");
	printf("\n\t\t[2] SEARCH BOOKS\n");
	printf("\n\t\t[3] READ BOOKS\n");
	printf("\n\t\t[4] TAKE A BOOK\n");
	printf("\n\t\t[5] RETURN BOOK\n");
	printf("\n\n\t\t\t ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			system("cls");
			simple_view_book();
			break;
		case 2:
			system("cls");
			search_books();
			break;
		case 3:
			system("cls");
			read_book();
			break;
		case 4:
			system("cls");
			take_books();
			break;
//		case 5:
//		    return_book();
//			break;
//		case 6:
//			close();
//			break;
	}
}

void admin_pannel()
{
	int choice;
	printf("\n\n\t\t\t\tWELCOME TO ADMIN PANNEL\n\n");
	printf("\n\t\t[1] ADD BOOK\n");
	printf("\n\t\t[2] UPDATE BOOK\n");
	printf("\n\t\t[3] DELETE BOOK\n");
	printf("\n\t\t[4] VIEW DETAILS\n");
	printf("\n\t\t[5] SEARCH BOOK\n");
	printf("\n\t\t[6] VIEW USER DETAILS\n");
	printf("\n\t\t[7] EXIT\n");
	printf("\n\n\t\t\t ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			add_book();
			break;
		case 2:
			update_book();
			break;
		case 3:
			delete_book();
			break;
		case 4:
			system("cls");
			admin_view_book();
			break;
		case 5:
			search_books();
			break;
//		case 6:
//		    view_user_details();
//			break;
		case 6:
			close();
			break;
	}
}

void add_book()
{
	FILE *fp;
	fp = fopen("book_record.dat","a+");
    book_invalid:
	system("cls");
	printf("\t\t\t==== ADD RECORD  ====");
	printf("\n\t\tENTER TODAY'S DATE(MM/DD/YYYY): ");
	scanf("%d/%d/%d",&add.book_date.month,&add.book_date.day,&add.book_date.year);
	printf("\n\t\tEnter the book id: ");
	scanf("%d",&check.book_id);
	while(fscanf(fp,"%d %s %s %d/%d/%d\n",&add.book_id,add.author,add.book_name,&add.book_date.month,&add.book_date.day,&add.book_date.year)!=EOF) {
		if(check.book_id==add.book_id) {
			printf("This book is already Existed");
			fordelay(100000000);
			goto book_invalid;
		}
	}
	add.book_id = check.book_id;
	printf("\n\t\tENTER THE AUTHOR NAME: ");
	scanf("%s",add.author);
	printf("\n\t\tENTER THE BOOK NAME: ");
	scanf("%s",add.book_name);
	getch();
	fprintf(fp,"%d %s %s %d/%d/%d\n",add.book_id,add.author,add.book_name,add.book_date.month,add.book_date.day,add.book_date.year);
	fclose(fp);
	printf("\n\t\t\t BOOK ADDED SUCESSFULLY: ");
    add_invalid:
	printf("\n\n\n\n\tEnter 1 to trg again or 2 to admin pannel or 0 to Exit: ");
	scanf("%d",&main_exit);
	if(main_exit==1) {
		system("cls");
		add_book();
	} else if(main_exit==0) {
		close();
	} else if(main_exit==2) {
		system("cls");
		admin_pannel();
	} else {
		printf("\nINVALID");
		fordelay(1000000000);
		goto add_invalid;
	}

}

void update_book(void)
{
	int choice,test=0;
	FILE *old,*newrec;
	old=fopen("book_record.dat","r");
	newrec=fopen("new.dat","w");

	printf("\nEnter the book id: of which info you want to change:");
	scanf("%d",&update.book_id);
	while(fscanf(old,"%d %s %s %d/%d/%d\n",&add.book_id,add.author,add.book_name,&add.book_date.month,&add.book_date.day,&add.book_date.year)!=EOF) {
		if (add.book_id==update.book_id) {
			test=1;
			printf("\nWhich information do you want to change?\n1.BOOK NAME\n2.AUTHOR NAME\n\nEnter your choice: ");
			scanf("%d",&choice);
			system("cls");
			if(choice==1) {
				printf("Enter the new book name:");
				scanf("%s",update.book_name);
				fprintf(newrec,"%d %s %s %d/%d/%d\n",add.book_id,add.author,update.book_name,add.book_date.month,add.book_date.day,add.book_date.year);
				system("cls");
				printf("Changes saved!");
			} else if(choice==2) {
				printf("Enter the new author name:");
				scanf("%s",&update.author);
				fprintf(newrec,"%d %s %s %d/%d/%d\n",add.book_id,update.author,add.book_name,add.book_date.month,add.book_date.day,add.book_date.year);
				system("cls");
				printf("Changes saved!");
			}
		} else
			fprintf(newrec,"%d %s %s %d/%d/%d\n",add.book_id,add.author,add.book_name,add.book_date.month,add.book_date.day,add.book_date.year);
	}
	fclose(old);
	fclose(newrec);
	remove("book_record.dat");
	rename("new.dat","book_record.dat");

	if(test!=1) {
		system("cls");
		printf("\nRecord not found!!\a\a\a");
        edit_invalid:
		printf("\nEnter 0 to try again,1 to return to admin pannel and 2 to exit:");
		scanf("%d",&main_exit);
		system("cls");
		if (main_exit==1)
			admin_pannel();
		else if (main_exit==2)
			close();
		else if(main_exit==0)
			update_book();
		else {
			printf("\nInvalid!\a");
			goto edit_invalid;
		}
	} else {
		printf("\n\n\nEnter 1 to go to the admin pannel and 0 to exit:");
		scanf("%d",&main_exit);
		system("cls");
		if (main_exit==1)
			admin_pannel();
		else
			close();
	}
}

void delete_book()
{
	FILE *old,*newrec;
	int test=0;
	old = fopen("book_record.dat","r");
	newrec = fopen("newfile.dat","w");
	system("cls");
	printf("ENTER THE BOOK ID: ");
	scanf("%d",&del.book_id);
	while(fscanf(old,"%d %s %s %d/%d/%d\n",&add.book_id,add.author,add.book_name,&add.book_date.month,&add.book_date.day,&add.book_date.year)!=EOF) {
		if(add.book_id!=del.book_id) {
			fprintf(newrec,"%d %s %s %d/%d/%d\n",add.book_id,add.author,add.book_name,add.book_date.month,add.book_date.day,add.book_date.year);
		} else {
			test++;
			printf("\nRecord deleted successfully!\n");
		}
	}
	fclose(old);
	fclose(newrec);
	remove("book_record.dat");
	rename("newfile.dat","book_record.dat");
	if(test==0) {
		printf("\nRecord Not Found!!!!\n");
        delete_invalid:
		printf("\nEnter 0 to try again,1 to return to admin-pannel and 2 to exit:");
		scanf("%d",&main_exit);
		if(main_exit==0) {
			system("cls");
			delete_book();
		} else if(main_exit==1) {
			system("cls");
			admin_pannel();
		} else {
			printf("\nINVALID\n");
			fordelay(10000000);
			goto delete_invalid;
		}
	} else {
		printf("\nEnter 1 to go to the admin_pannel and 0 to exit:");
		scanf("%d",&main_exit);
		system("cls");
		if (main_exit==1)
			admin_pannel();
		else
			close();
	}
}

void admin_view_book()
{
	FILE *view;
	int test=0;
	view = fopen("book_record.dat","r");
	printf("\nBOOK ID\t\tBOOK NAME\t\t\tAUTHOR\t\tDATE\n");
	while(fscanf(view,"%d %s %s %d/%d/%d\n",&add.book_id,add.author,add.book_name,&add.book_date.month,&add.book_date.day,&add.book_date.year)!=EOF) {
		printf("\n%6d\t\t%10s\t\t%10s\t\t%d/%d/%d",add.book_id,add.book_name,add.author,add.book_date.month,add.book_date.day,add.book_date.year);
		test++;
	}
	fclose(view);
	if(test==0) {
		printf("\nNO RECORD FOUND!!");
	}
    view_list_invalid:
	printf("\n\nEnter 1 to go to the admin pannel and 0 to exit:");
	scanf("%d",&main_exit);
	system("cls");
	if (main_exit==1)
		admin_pannel();
	else if(main_exit==0)
		close();
	else {
		printf("\nInvalid!\a");
		goto view_list_invalid;
	}
}

void user_view_book()
{
	FILE *view;
	int test=0;
	view = fopen("book_record.dat","r");
	printf("\nBOOK ID\t\tBOOK NAME\t\t\tAUTHOR\t\tDATE\n");
	while(fscanf(view,"%d %s %s %d/%d/%d\n",&add.book_id,add.author,add.book_name,&add.book_date.month,&add.book_date.day,&add.book_date.year)!=EOF) {
		printf("\n%6d\t\t%10s\t\t%10s\t\t%d/%d/%d",add.book_id,add.book_name,add.author,add.book_date.month,add.book_date.day,add.book_date.year);
		test++;
	}
	fclose(view);
	if(test==0) {
		printf("\nNO RECORD FOUND!!");
	}
	take_book_option();

}

void simple_view_book()
{
	FILE *view;
	int test=0;
	view = fopen("book_record.dat","r");
	printf("\nBOOK ID\t\tBOOK NAME\t\t\tAUTHOR\t\tDATE\n");
	while(fscanf(view,"%d %s %s %d/%d/%d\n",&add.book_id,add.author,add.book_name,&add.book_date.month,&add.book_date.day,&add.book_date.year)!=EOF) {
		printf("\n%6d\t\t%10s\t\t%10s\t\t%d/%d/%d",add.book_id,add.book_name,add.author,add.book_date.month,add.book_date.day,add.book_date.year);
		test++;
	}
	fclose(view);
	if(test==0) {
		system("cls");
		printf("\nRecord not found!!\a\a\a");
        see_invalid:
		printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
		scanf("%d",&main_exit);
		system("cls");
		if (main_exit==1)
			user_interface();
		else if (main_exit==2)
			close();
		else if(main_exit==0)
			search_books();
		else {
			system("cls");
			printf("\nInvalid!\a");
			goto see_invalid;
		}
	} else {
		printf("\nEnter 1 to go to the user desboard and 0 to exit:");
		scanf("%d",&main_exit);
	}
	if (main_exit==1) {
		system("cls");
		user_interface();
	} else {
		system("cls");
		close();
	}
	

}

void search_books()
{
	system("cls");
	FILE *ser;
	ser = fopen("book_record.dat","r");
	int test = 0;
	printf("\nENTER THE BOOK ID: \n");
	scanf("%d",&search.book_id);
	while(fscanf(ser,"%d %s %s %d/%d/%d\n",&add.book_id,add.author,add.book_name,&add.book_date.month,&add.book_date.day,&add.book_date.year)!=EOF) {
		if(add.book_id==search.book_id) {
			test=1;
			printf("\nBOOK ID:%d \nBOOK NAME:%s \nAUTHOR:%s \nDATE:%d/%d/%d",add.book_id,add.book_name,add.author,add.book_date.month,add.book_date.day,add.book_date.year);
		}
	}
	fclose(ser);
	if(test==0) {
		system("cls");
		printf("\nRecord not found!!\a\a\a");
        see_invalid:
		printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
		scanf("%d",&main_exit);
		system("cls");
		if (main_exit==1)
			admin_pannel();
		else if (main_exit==2)
			close();
		else if(main_exit==0)
			search_books();
		else {
			system("cls");
			printf("\nInvalid!\a");
			goto see_invalid;
		}
	} else {
		printf("\nEnter 1 to go to the admin pannel and 0 to exit:");
		scanf("%d",&main_exit);
	}
	if (main_exit==1) {
		system("cls");
		admin_pannel();
	} else {
		system("cls");
		close();
	}
}


void read_book()
{
	int choice;
	system("cls");
	printf("\n\t\t\tREAD BOOKS!!");
	printf("\n\t[1] BOOK ");
	printf("\n\t[2] BOOK ");
	printf("\n\t\tENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			book1();
			break;
		case 2:
			book2();
			break;
	}
}


void book1()
{
	FILE *fp;
	char ch;
	fp = fopen("book1.txt","r");
	while(!feof(fp)) {
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	user_desh:
	printf("\n\tENTER 1 TO USER DESBOARD OR 0 TO EXIT");
	scanf("%d",&main_exit);
	if(main_exit==1){
		system("cls");
		user_interface();
	}else if(main_exit == 0){
		system("cls");
		close();
	}else{
		printf("\nINVALID");
		goto user_desh;
	}
}

void book2()
{
	FILE *fp;
	char ch;
	fp = fopen("book2.txt","r");
	while(!feof(fp)) {
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	user_desh2:
	printf("\n\tENTER 1 TO USER DESBOARD OR 0 TO EXIT ");
	scanf("%d",&main_exit);
	if(main_exit==1){
		system("cls");
		user_interface();
	}else if(main_exit == 0){
		system("cls");
		close();
	}else{
		printf("\nINVALID");
		goto user_desh2;
	}
}

void take_books()
{
	system("cls");
	int choice;
	printf("\n\n\t\t\tWELCOME TO LIBARAY DESBORD \n");
	printf("\n\t\t[1] LOGIN \n");
	printf("\n\t\t[2] SINGUP \n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			login_book();
			break;
		case 2:
			singup_book();
			break;
	}
}

void login_book()
{
 FILE *log;
 log = fopen("login_data.dat","r");
 printf("\n\tEnter your uesr id: ");
 scanf("%d",&check_user.user_id);
 while(fscanf(log,"%d %s %d\n",&add_user.user_id,&add_user.name,&add_user.age)!=EOF){
 	if(check_user.user_id!=add_user.user_id){
 		printf("\n\t\tACCOUNT NOT EXISTED PLEASE SINGUP!");
 		fordelay(1000000);
		take_books();
	 }
	 printf("\n\t\tYOU ARE SUCCESSFULLY LOGIN!!");
	 printf("\n\n\n");
	 system("cls");
	 user_view_book();
 }
 
}

void singup_book()
{
	FILE *sing;
	sing = fopen("login_data.dat","a+");
	system("cls");
	printf("\n\n\t\t\t====CREATE A NEW ACCOUNT===");
	invalid_sing:
	printf("\n\t\tENTER YOUR NEW USER ID: ");
	scanf("%d",&check_user.user_id);
	while(fscanf(sing,"%d %s %d\n",&add_user.user_id,&add_user.name,&add_user.age)!=EOF){
		if(check_user.user_id == add_user.user_id){
			printf("THis ACCOUNT ALREADY EXISTED");
			fordelay(1000000);
			goto invalid_sing;
		}
	}
	add_user.user_id=check_user.user_id;
	printf("\n\tEnter your name: ");
	scanf("%s",add_user.name);
	printf("\n\tEnter your age: ");
	scanf("%d",&add_user.age);
	fprintf(sing,"%d %s %d\n",add_user.user_id,add_user.name,add_user.age);
	fclose(sing);
	printf("\n\n\t\tACCOUNT CREATE SUCCESSFULLY\n");
	invalid_user:
	printf("\n\t\tENTER 1 TO LOGIN PAGE OR 0 TO EXIT");
	scanf("%d",main_exit);
	if(main_exit==1){
		take_books();
	}else if(main_exit==0){
		close();
	}else{
		printf("\nINVALID");
		fordelay(10000000);
		goto invalid_user;
	}
}


void take_book_option(){
	FILE *tfp;
	tfp =fopen("user_data.dat","a+");
	printf("\n\n\t\tEnter the required Data");
	printf("\nEnter the book id: ");
	scanf("%d",&check_book.id);
	while(fscanf(tfp,"%d %s %s %d/%d/%d\n",&add_books.id,&add_books.book_name,&add_books.user_name,&add_books.takes_date.month,&add_books.takes_date.day,&add_books.takes_date.year)!=EOF){
		if(check_book.id==add_books.id){
			printf("\n\tTHIS BOOK YOU ARE ALREADY TAKEN");
			getch();
			fordelay(100000000000000);
			system("cls");
			login_book();
		}
	}
	add_books.id = check_book.id;
	printf("\nENTER THE BOOK NAME: ");
	scanf("%s",add_books.book_name);
	printf("\nENTER YOUR NAME: ");
	scanf("%s",add_books.user_name);
	printf("\nENTER THE RETURN DATE(MM/DD/YYYY):");
	scanf("%d/%d/%d",&add_books.takes_date.month,&add_books.takes_date.day,&add_books.takes_date.year);
	fprintf(tfp,"%d %s %s %d/%d/%d\n",&add_books.id,&add_books.book_name,&add_books.user_name,&add_books.takes_date.month,&add_books.takes_date.day,&add_books.takes_date.year);
	fclose(tfp);
	printf("\n\t\tSUCCESSFULLY YOU TAKE A BOOK!!!");
	printf("\n\t\tEnter 1 to user desboard or 0 to exit: ");
	scanf("%d",&main_exit);
	if(main_exit==1){
		system("cls");
		user_interface();
	}else if(main_exit==0){
		system("cls");
		close();
	}
}

//void return_book(){
//	FILE *old,*newrec;
//    old = fopen("user_data.dat","r");
//    newrec = fopen("new.dat","w");
//	printf("\nEnter your ID: ");
//	scanf("%d",&check_book.id);
//	while(fscanf(old,"%d %s %s %d/%d/%d",&add_books.id,add_books.book_name,add_books.user_name,&add_books.takes_date.month,&add_books.takes_date.day,&add_books.takes_date.year)!=EOF){
//		if(check_book.id!=add_books.id){
//			fprintf(newrec,"%d %s %s %d/%d/%d",add_books.id,add_books.book_name,add_books.user_name,add_books.return_date.month,add_books.return_date.day,add_books.return_date.year);
//		}else{
//			printf("\n\t\tENTER THE TODAY'S DATE(MM/DD/YYYY): ");
//			scanf("%d/%d/%d",return_book.return_date.month,return_book.return_date.day,return_book.return_date.year);

//		}
//	}
//}


int valid_date(int day, int mon, int year)
{
    int is_valid = 1, is_leap = 0;

    if (year >= 1800 && year <= 9999)
    {

        //  check whether year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            is_leap = 1;
        }


        if(mon >= 1 && mon <= 12)
        {

            if (mon == 2)
            {
                if (is_leap && day == 29)
                {
                    is_valid = 1;
                }
                else if(day > 28)
                {
                    is_valid = 0;
                }
            }

            else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
            {
                if (day > 30)
                {
                    is_valid = 0;
                }
            }


            else if(day > 31)
            {
                is_valid = 0;
            }
        }

        else
        {
            is_valid = 0;
        }

    }
    else
    {
        is_valid = 0;
    }

    return is_valid;

}

void calculate()
{
    int day1, mon1, year1,
        day2, mon2, year2;

    int day_diff;

    if(!valid_date(day1, mon1, year1))
    {
        printf("First date is invalid.\n");
    }

    if(!valid_date(day2, mon2, year2))
    {
        printf("Second date is invalid.\n");
        exit(0);
    }

    if(day2 < day1)
    {

        if (mon2 == 3)
        {

            if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
            {
                day2 += 29;
            }

            else
            {
                day2 += 28;
            }
        }

        else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12)
        {
           day2 += 30;
        }

        else
        {
           day2 += 31;
        }

        mon2 = mon2 - 1;
    }

    if (mon2 < mon1)
    {
        mon2 += 12;
        year2 -= 1;
    }

    day_diff = day2 - day1;

    float fine;

    if(day_diff<=30)
    {
        if(day_diff<=30&&day_diff>10)
            fine=7.5+((day_diff-10)*5);
        else if(day_diff<=10&&day_diff>5)
            fine=2.5+((day_diff-5)*1);
        else if(day_diff<6&&day_diff>0)
            fine=day_diff*0.5;
        printf("\n\nfine=  %.2f\n\n",fine);

    }
    else printf("your membership is canceled\n\n");

}


















