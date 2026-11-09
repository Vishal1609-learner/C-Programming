#include <stdio.h>
int main()
{
    int row,col,a[10][10],i,j;
    printf("Enter the no. of rows and columns: ");
scanf("%d%d",&row,&col);
printf ("Enter the element of the Matrix: \n ");
for(i=0;i<row;i++)
for(j=0;j<col;j++)
{
    printf ("Enter the element a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
}
printf("\n Displaying the Matrix: \n ");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
    printf("%d\t",a[i][j]);
}

    printf("\n");
}
return 0;
}
