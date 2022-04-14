/*Program to print all uppercase alphabets from 'A' to 'Z' using a while loop.*/
#include <stdio.h>
void printABCD(int n){
    while(n!=91){
        printf("%c ",n);
        n++;
    }
}
int main()
{
    int n=65;
    printABCD(n);
    return 0;
}
