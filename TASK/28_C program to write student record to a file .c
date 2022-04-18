/*C program to write student record to a file*/

#include<stdio.h>

typedef struct student
{
    int stdid;
    char firstname[20];
    char lastname[20];
    char department[20];

}Stu;

Stu stu[20];

void getStudentDetails();
void File(int n);

int main()
{

    getStudentdetails();
    return 0;
}

void getStudentdetails()
{
    int n;

    printf("\n Enter Number of Students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("\n Enter Student Detials %d \n", i+1);

        printf("\n Student ID : ");
        scanf("%d", &stu[i].stdid);

        printf("\n Student First Name : ");
        scanf("%s", stu[i].firstname);

        printf("\n Student Last Name : ");
        scanf("%s", stu[i].lastname);

        printf("\n Department : ");
        scanf("%s", stu[i].department);


    }

    File(n);
}
void File(int n)
{
    FILE *fe;

    fe = fopen("student.txt", "w");


    for(int i = 0; i < n; i++)
    {

        fprintf(fe, " Student %d\n", i+1);

        fprintf(fe, "\n Student Id : %d", stu[i].stdid);
        fprintf(fe, "\n Student First Name %s: ", stu[i].firstname);
        fprintf(fe, "\n Student Last Name : %s", stu[i].lastname);
        fprintf(fe, "\n Student Department : %s", stu[i].department);



    }
}
