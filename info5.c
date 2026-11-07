#include <stdio.h>
int main() 
{
    int a,b;
    char op;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("Addition=%d",a+b);
        break;
        case '-':
        printf("Subtraction=%d",a-b);
        break;
        case '*':
        printf("Multiplication=%d",a*b);
        break;
        case '/':
        if (b!=0)
        printf("Division=%d",a/b);
        else
        printf ("Division by 0 is not possible");
        break;
        default:
        printf("Invalid Operator");
        return 0;
    }
}