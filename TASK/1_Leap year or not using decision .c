/*Leap year or not using decision*/
#include<stdio.h>
CheckLeapOrNot(int);
int main(){
    int year;
    printf("\n Enter a Year :");
    scanf("%d",&year);
    CheckLeapOrNot(year);
}
CheckLeapOrNot(int y){
    if((y%4==0 && y%100!=0)||(y%400==0)){
        printf("\n Leap Year");
    }
    else{
        printf("\n Not a Leap Year");
    }
}
