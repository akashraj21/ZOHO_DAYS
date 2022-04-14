/*Largest among three numbers using nested if statement*/
#include <stdio.h>
int PrintFindLargestNumber(int n1,int n2,int n3){
    if(n1>n2){
       if(n1>n3){
           printf("%d is the largest Number",n1);
       }
       else{
           printf("%d is the largest Number",n2);
       }
       
   }
   else if(n2>n3){
       printf("%d is the largest Number",n2);
   }
   else{
       printf("%d is the largest Number",n3);
   }
}
int main()
{
   int n1,n2,n3;
   printf("Enter three Numbers");
   scanf("%d %d %d",&n1,&n2,&n3);
   PrintFindLargestNumber(n1,n2,n3);
}
