#include <stdio.h>
int main() 
{
    char ch ;
    printf("Enter the Character: ");
    scanf("%c",&ch);
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf(" %c is a alphabet",ch);
        
    }
    else 
    {
        printf("%c is not a Alphabet",ch);
        
    }
   

    return 0;
}