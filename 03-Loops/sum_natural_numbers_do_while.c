#include <stdio.h>
int main() 
{
    int n,i=1,sum=0;
    printf("Enter the Limit: ");
    scanf(" %d",&n);
    do
    {
        sum+=i;
        i++;
    }
    while(i<=n);
    {
        printf("Sum of natural numbers= %d",sum);
        
    }
 

    return 0;
}