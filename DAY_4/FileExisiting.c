#include<stdio.h>

int main()
{
    char filename[20];
    
    printf("\n Enter the File Name : ");
    scanf("%s", filename);
    
    FILE *fp;
    
    if(fp = fopen(filename, "r"))
    {
        fclose(fp);
        printf("\n THe file %s Exists.", filename);
    }
    else
    {
        printf("\n File Not Found.");
    }
    
    
    return 0;
}
