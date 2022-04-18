/*Write a program by using a switch case. If a user enters 11 it will 
have area of circle and when user enters 22 it will have area of 
rectangle and when user enters 33 it will give area of square. 
When the user enters 44 it will give an area of triangle.*/

#include<stdio.h>
#define PIE 3.14

int FindArea(int);
int Circle(int);
int Rectangle(int ,int );
int Square(int);
int Triangle(int,int,int);

int Circle(int r){
	 printf("Area of Circle is : %.2f", (PIE * (r*r)));
}
int Rectangle(int l,int b){
	printf("Area of Rectangle is : %d", l*b);
}
int Square(int l){
	 printf("Area of SQUARE is : %d", l*l);
}
int Triangle(int l,int b,int h){
	printf("Area of TRIANGLE is : %.2f", 0.5*(l*b*h));
}

int main(){
	int ch;
	do{
		printf("\n Find_Area");
		printf("\n 11.CIRCLE ");
		printf("\n 22.RECTANGLE ");
		printf("\n 33.SQUARE ");
		printf("\n 44.TRIANGLE");
		printf("\n 55.EXIT");
		printf("\n ENTER THE ABOVE ONE OPTION: ");
		scanf("%d",&ch);
		FindArea(ch);
	}while(ch!=55);
	return 0;
}
int FindArea(int ch){
	switch(ch){
        case 11:
        {
            printf("\n Area of Circle. ");
            int r;
            printf("\n Enter Radius : ");
            scanf("%d", &r);
            Circle(r);
            break;
        }
        case 22:
        {
            printf("\n Area of RECTANGLE. ");
            int l, b;
            
            printf("\n Enter length and breath : ");
            scanf("%d %d", &l, &b);
            Rectangle(l,b);
            break;
        }
        case 33:
        {
            printf("\n Area of SQUARE. ");
            int l;
            
            printf("\n Enter Side Lenght: ");
            scanf("%d", &l);
            Square(l);
            
            break;
        }
        case 44:
        {
            printf("\n Area of TRIANGLE. ");
            int l, b, h;
            
            printf("\n Enter length breath and height : ");
            scanf("%d %d %d", &l, &b, &h);
            
            Triangle(l,b,h);
            
            break;
        }
        case 55 :
            printf("\n Thank you");
            break;
        default :
        {
            printf("\n Invalid");
        }
    }
}
