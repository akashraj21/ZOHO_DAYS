/*Write a program to take input from 5 subjects . find total and calculate percent. On the basis of percent provide grade like  IF Per > 80 “A+”
             Per >= 65 and per <=80 “A”
                         Per > =50 and per <=65 “B”
             Per >= 42 and per <=50 “C”
             Per < 42 “Fail”
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3,s4,s5,total=500,sum=0;
    float per;
    printf("Enter Marks of 5 Subjects: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    printf("Sum of 5 Subjects is: %d\n",sum);
    per=(sum*100)/total;
    printf("Percentage is: %f",per);
    if(per>80){
        printf("A+");
    }
    else if(per>=65 && per<=80){
        printf("A");
    }
    else if(per>=50 && per<=65){
        printf("B");
    }
    else if(per>=42 && per<=50){
        printf("C");
    }
    else if(per<42){
        printf("FAIL");
    }
    return 0;
}
