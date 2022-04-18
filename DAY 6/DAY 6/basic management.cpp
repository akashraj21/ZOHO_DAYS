//Build the basic management application by your own choice using functions
#include<stdio.h>

int price = 50;

struct hotel {
	int order_id;
	char dishes[20];
	int quantity;
	
}order;

void booking();
void print_bill();

int main(){
	printf("\n\n\t\tWELLCOME TO HOTEL");
	booking();
    print_bill();
	
}

void booking(){
	printf("\nENTER YOUR ORDER ID: ");
	scanf("%d",&order.order_id);
	printf("\nENTER YOUR DISHES: ");
	scanf("%s",order.dishes);
	printf("\nENTER THE QUANTITY OF %s : ",order.dishes);
	scanf("%d",&order.quantity);
}

void print_bill(){
	printf("\n\nORDER ID: %d",order.order_id);
	printf("\n\nDISHES: %s",order.dishes);
	printf("\n\nQUANTITY: %d",order.quantity);
	printf("\n\nPRICE : %d" ,order.quantity*price);
}



