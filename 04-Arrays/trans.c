#include <stdio.h>
int main()
{
    int a[10][10],t[10][10];
    int i,j,rows,cols;
    printf("Enter the numbers of rows and columns: ");
    scanf("%d%d",&rows,&cols);
    printf("Enter the elements of the matrinx \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Enter the Elements of Matrix a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //  Transpose of the Matrix
    for (i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    // Displaying the Matrix

    printf("Displaying the  Matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // Displaying the Transpose of the Matrix
    printf("Displaying the Transpose of the Matrix: \n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}