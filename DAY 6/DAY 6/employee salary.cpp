///////// * Salary Increment uing Structure * /////

#include<stdio.h>
struct employee{
	int emp_id;
	char emp_name[50];
	int work_t;
	int salary;
}emp[10];

void increament(int count){
	printf("\n\nEmployee Details After Increament of Salary : \n\n\n");
	printf("\nEMPLOYEE_ID         EMP_NAME          EMP_WORKING_TIME      EMP_SALARY\n\n");
	for(int i=0;i<count;i++){
		if(emp[i].work_t==8){
			emp[i].salary=emp[i].salary+50;
		}
		else if(emp[i].work_t==10){
			emp[i].salary=emp[i].salary+100;
		}
		else if(emp[i].work_t>=12){
			emp[i].salary=emp[i].salary+150;
		}
		printf(" %-19d%-25s%-17d$%d",emp[i].emp_id,emp[i].emp_name,emp[i].work_t,emp[i].salary);
		printf("\n");
	}
}
int main(){
	int count;
	printf("\n\nEnter the Number Of Employees : ");
	scanf("%d",&count);
	for(int i=0;i<count;i++){
		printf("\nEnter the Employee Id : ");
		scanf("%d",&emp[i].emp_id);
		printf("\nEnter the Employee Name : ");
		scanf("%s",emp[i].emp_name);
		printf("\nEnter the Employee Working Time: ");
		scanf("%d",&emp[i].work_t);
		printf("\nEnter the Employee Salary : ");
		scanf("%d",&emp[i].salary);
	}
	printf("\n\nEmployee Details Before Increament of Salary : \n\n\n");
	printf("\nEMPLOYEE_ID         EMP_NAME          EMP_WORKING_TIME      EMP_SALARY\n\n");
	for(int i=0;i<count;i++){
		printf(" %-19d%-25s%-17d$%d",emp[i].emp_id,emp[i].emp_name,emp[i].work_t,emp[i].salary);
		printf("\n");
	}
	increament(count);
}
