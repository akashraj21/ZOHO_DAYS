//Write a program by using a switch case.
//If a user enters 11 it will have area of circle and
//when user enters 22 it will have area of rectangle and when user enters 33 it will give area of square.
// When the user enters 44 it will give an area of triangle.

#include<stdio.h>


void area_circle(){
	
	float redius,area;
	printf("\nENTER THE READIUS: ");
	scanf("%f",&redius);
	area = 3.14159*redius*redius;
	printf("AREA OF CIRCLE %f",area);
	
}

void area_rectangle(){
	float length,breadth;
    float area;

    printf(" Enter the Length of a Rectangle : ");
    scanf("%f",&length);

    printf("\n Enter the Breadth of a Rectangle : ");
    scanf("%f",&breadth);

    area = length * breadth;

    printf("\n Area of Rectangle is : %f",area);
}

void area_squre(){
	
    float side,area;

    printf("\n Enter the Length of Side : ");
    scanf("%f",&side);

    area = side * side ;

    printf("\n Area of Square : %f",area);
    

}

void area_triangle(){
	float b ,h, area;
		printf("Enter the BASE");
		scanf("%d",&b);
		printf("Enter the height");
		scanf("%d",&h);
        area = (b*h) / 2 ;
        printf("\n\n Area of Triangle is: %f",area);
}



int main(){
	int choice;
	printf("ENTER THE NUMBER 11 OR 22 OR 33 OR 44: ");
	scanf("%d",&choice);
	switch(choice){
		case 11:
		  area_circle();
		  break;
		case 22:
		  area_rectangle();
		  break;
		case 33:
		  area_squre();
		  break;
		case 44:
		  area_triangle();
		  break;
	}



}
