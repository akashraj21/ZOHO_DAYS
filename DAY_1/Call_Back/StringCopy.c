#include <stdio.h>

void str(void (*cp)(char*));
void CopyString(char *ptr);


int main() {

    str(CopyString);
        
    return 0;
}

void str(void (*cp)(char*))
{
    char str1[20];
    
    printf("\n Enter String : ");
    scanf("%s", str1);
    
    
    char *ptrOrginal = str1;  
    
    printf("The String in ptrOrginal : %s\n", ptrOrginal);
    cp(ptrOrginal);
}
void CopyString(char *ptr)
{
    printf("copying  of ptrOrginal into ptrCopy...\n");
    char *ptrCopy = ptr;
    printf("The String in ptrCopy : %s", ptrCopy);
    
}
