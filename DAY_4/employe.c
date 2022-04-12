#include<stdio.h>

typedef struct employee
{
    int empid;
    char firstname[20];
    char lastname[20];
    char designation[20];
    float salary;
    
}emp;

emp e[20];

void getdetails();
void emp_file(int n);

int main()
{
    
    getdetails();
    
    return 0;
}

void getdetails()
{
    int n;
    
    printf("\n Enter Number of Employees to be added : ");
    scanf("%d", &n);
    
    
    for(int i = 0; i < n; i++)
    {
        printf("\n Enter The Details of Employee %d \n", i+1);
        
        printf("\n Enter Employee ID : ");
        scanf("%d", &e[i].empid);
        
        printf("\n Enter Employee First Name : ");
        scanf("%s", e[i].firstname);
        
        printf("\n Enter Employee Last Name : ");
        scanf("%s", e[i].lastname);
        
        printf("\n Enter Employee Designation : ");
        scanf("%s", e[i].designation);
        
        printf("\n Enter Employee Salary : ");
        scanf("%f", &e[i].salary);
        
        
    }
    
    emp_file(n);
}


void emp_file(int n)
{
    FILE *fe;
    
    fe = fopen("employee.txt", "w");
    
    
    for(int i = 0; i < n; i++)
    {
        
        fprintf(fe, " Employee %d\n", i+1);
        
        fprintf(fe, "\n Employee Id : %d", e[i].empid);
        fprintf(fe, "\n Employee First Name %s: ", e[i].firstname);
        fprintf(fe, "\n Employee Last Name : %s", e[i].lastname);
        fprintf(fe, "\n Employee Designation : %s", e[i].designation);
        fprintf(fe, "\n Employee Salary : %.2f \n\n", e[i].salary);
        
        
        
    }
    
    
}
