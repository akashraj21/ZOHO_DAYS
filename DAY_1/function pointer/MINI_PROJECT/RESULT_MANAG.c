#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Managment{
    char Name[20];
    int EnRollId;
    char Gender[10];
    long int Mobile_Number;
    char Blood;
    int marks;
};

void CreateDetials(struct Managment *,int);
int Subject(int );
int TotalFind(int,int,int,int,int);
void Display(struct Managment *,int);
int main(){
    int n,Students,limit;
    struct Managment *ptr;
    do{
        printf("\n1)...DISPLAY THE STUDENTS DETIALS....\n2)...CREATING A STUDENTS DETIALS");
        scanf("%d",&n);
        switch(n){
            case 1:Display(ptr,Students);
            break;
            
            case 2:scanf("Enter Number Of Students Detials %d",&Students);
            ptr=(struct Managment*)malloc(Students*sizeof(struct Managment));
            if(ptr!=NULL){
                CreateDetials(ptr,Students);
            }
            else{
                printf("Nothing Data Available");
            }
            default : printf("Please Choose Correct one");
            exit(0);
        }
        printf("\n 1 to continue or exit enter 0 ");
        scanf("%d",&limit);
    }
    while(limit);
}
void CreateDetials(struct Managment *managment,int Students){
    struct Managment *View=managment;
    for(int i=1;i<=Students;i++){
        printf("ENTER THE CANDIATES DETIALS");
        scanf("ENTER ROLL_NO : %d\n",&View->EnRollId);
        scanf("ENTER NAME : %s\n",View->Name);
        scanf("ENTER GENDER : %c\n",View->Gender);
        scanf("ENTER MOBILE NUMBER: %ld\n",&View->Mobile_Number);
        scanf("ENTER BLOOD GROUP: %c\n",View->Blood);
        printf("MARSK\n");
        View->marks=Subject;
        View++;
        
    }
}
int Subject(int i){
    int DataStructure,Operating_System,Matrix,Java,Mobile_APP_Development;
    scanf("ENTER DataStructure MARK %d\n",&DataStructure);
    scanf("ENTER Operating_System MARK %d\n",&Operating_System);
    scanf("ENTER Matrix MARK %d\n",&Matrix);
    scanf("ENTER Java MARK %d\n",&Java);
    scanf("ENTER Mobile_APP_Development MARK %d\n",&Mobile_APP_Development);
    return TotalFind(DataStructure,Operating_System,Matrix,Java,Mobile_APP_Development);
    
}
int TotalFind(int DS,int OS,int Matrix,int Java,int MAD){
    int Sum=DS+OS+Matrix+Java+MAD;
    Sum=Sum/5;
    return Sum;
}
void Display(struct Managment *managment,int Students){
    struct Managment *View=managment;
    for(int i=1;i<=Students;i++){
        printf("Reg.No: %d\n",View->EnRollId);
        printf("Name : %s\n",View->Name);
        printf("Gender %c\n",View->Gender);
        printf("Blood Group: %c\n",View->Blood);
        printf("Marks %d\n",View->marks);
        View++;
    }
}
