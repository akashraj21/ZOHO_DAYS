/*Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries.
             Hours of work per day	8	10	>=12
Increase in salary	$50	$100	$150*/
#include<stdio.h>
#include<stdlib.h>
#define NO_EMP 5

typedef struct Emp_Detials{
    char Name[20];
    float Salary;
    int workng_hours;
}Emp;

int main(){
    Emp emp[10];
    int i;
    printf("Enter Employe Detials\n");
    for(i=1;i<=NO_EMP;i++){
        printf("\n%d Employe Name: ",i);
        scanf("%s",employe[i].Name);
        printf("\n%d Employe Salary: ",i);
        scanf("%f",&employe[i].Salary);
        printf("\n%d Employe Working Hours: ",i);
        scanf("%d",&employe[i].workng_hours);
    }
    printf("\nBefore Increment Employe Detials..\n");
    for(i=1;i<=NO_EMP;i++){
        printf("\n%d Employe Name: %s",i,employe[i].Name);
        printf("\n%d Employe Salary: %f",i,employe[i].Salary);
        printf("\n%d Employe Workng Hours: %d",i,employe[i].workng_hours);
        printf("\n*************************\n");
    }
    
    printf("\nAfter Increment Employe Detials..\n");
    for(i=1;i<=NO_EMP;i++){
        if(employe[i].workng_hours==8){
            printf("\n%d Employe Name: %s",i,employe[i].Name);
            printf("\n%d Employe Salary: %f",i,employe[i].Salary+50);
            printf("\n__________________________\n");
        }
        else if(employe[i].workng_hours==10){
            printf("\n%d Employe Name: %s",i,employe[i].Name);
            printf("\n%d Employe Salary: %f",i,employe[i].Salary+100);
            printf("\n__________________________\n");
        }
        else if(employe[i].workng_hours==12){
            printf("\n%d Employe Name: %s",i,employe[i].Name);
            printf("\n%d Employe Salary: %.f",i,employe[i].Salary+150);
            printf("\n__________________________\n");
        }
        else{
            printf("NO INCREMENT");
        }
    }
}
