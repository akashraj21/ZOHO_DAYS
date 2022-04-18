//Write a program to take input from 5 subjects .
//find total and calculate percent. On the basis of percent provide grade like
//             IF Per > 80 “A+”
//             Per >= 65 and per <=80 “A”
//             Per > =50 and per <=65 “B”
//             Per >= 42 and per <=50 “C”
//             Per < 42 “Fail”

#include<stdio.h>

struct student{
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
}mark;

int main(){
	int per;
	printf("\nENTER THE FIRST MARK: ");
	scanf("%d",&mark.mark1);
	printf("\nENTER THE SECOND MARK: ");
	scanf("%d",&mark.mark2);
	printf("\nENTER THE THIRD MARK: ");
	scanf("%d",&mark.mark3);
	printf("\nENTER THE FOUR MARK: ");
	scanf("%d",&mark.mark4);
	printf("\nENTER THE FIVE MARK: ");
	scanf("%d",&mark.mark5);
	
	per = (mark.mark1+mark.mark2+mark.mark3+mark.mark4+mark.mark5)/5;
	
	if(per>80){
		printf("GRADE A+");
	}else if(per >= 65 && per<=80){
		printf("GRADE A");
	}else if(per >= 50 && per<= 65){
		printf("GRADE B");
	}else if(per >=42 && per <= 50){
		printf("GRADE C");
	}else{
		printf("FAIL");
	}
	
	return 0;
}
