#include <stdio.h>
int main()
{
    int cid;
    float cr;
    printf("Enter your Course ID and Credit: ");
    scanf("%d %f",&cid,&cr);
    printf("Course ID: %d",cid);
        printf ("\n Credit: %.2f",cr);
        return 0;
}