//31.C Program to Create Employee and Update it
#include<stdio.h>

struct employee{
	int emp_id;
	char employee_name[20];
	char employee_designation[20];
};
struct employee employee;
void add_employee();
void view_employee();
void update_employee();
int main(){
int option;
do{
	printf("\n\t\t\tEMPLOYEE");
	printf("\n\t\t\t[1].ADD");
	printf("\n\t\t\t[2].UPDATE");
	printf("\n\t\t\t[3].VIEW");
	printf("\n\t CHOOSE YOUR OPTION");
	scanf("%d",&option);
	switch(option){
		case 1:
			add_employee();
			break;
		case 2:
			update_employee();
			break;
		case 3:
			view_employee();
			break;
		default:
			printf("Invalid option");
			break;
			
	}
}while(1);	
}

void add_employee(){
		int id,found=0;
	FILE *fptr;
	fptr=fopen("employee.txt","a+");
	printf("Enter the Employee ID ");
	scanf("%d",&id);
	while(fread(&employee,sizeof(employee),1,fptr)){
		if(id==employee.emp_id){
			found=1;
			break;
		}
	}
	if(found){
		printf("Employee ID are already exist");
	}
	else{
		employee.emp_id=id;
		printf("Enter Employee Name");
		scanf("%s",employee.employee_name);
		printf("Enter Employee destignation");
		fflush(stdin);
		gets(employee.employee_designation);	
		fwrite(&employee,sizeof(employee),1,fptr);
	}
	fclose(fptr);
}
void update_employee(){
	int id,found=0;
	FILE *fptr,*fptr1;
	fptr=fopen("employee.txt","r");
	fptr1=fopen("temp.txt","w");
	
	printf("Enter the Employee");
	scanf("%d",&id);
	while(fread(&employee,sizeof(employee),1,fptr)){
		if(id==employee.emp_id){
			found=1;
		employee.emp_id=id;
		fflush(stdin);
		printf("Enter new Employee Name");
		gets(employee.employee_name);
		printf("Enter  new Employee destignation");
		gets(employee.employee_designation);	
		fwrite(&employee,sizeof(employee),1,fptr1);
		}
		else{
			fwrite(&employee,sizeof(employee),1,fptr1);
		}
	}
	fclose(fptr);
	fclose(fptr1);
	if(!found){
		printf("Employee ID are canot found");
	}
	else{
			FILE *f,*f1;
	f=fopen("employee.txt","w");
	f1=fopen("temp.txt","r");
	while(fread(&employee,sizeof(employee),1,f1)){
		fwrite(&employee,sizeof(employee),1,f);
	}
	fclose(f);
	fclose(f1);
	
	}
	
}
void view_employee(){
	FILE *fptr;
	fptr=fopen("employee.txt","r");
	printf("EMPLOYEE ID \t EMPLOYEE NAME \t EMPLOYEE DESIGNATION\n");
	while(fread(&employee,sizeof(employee),1,fptr)){
		printf("%d\t\t%s\t\t%s\n",employee.emp_id,employee.employee_name,employee.employee_designation);
	}
	fclose(fptr);
}
