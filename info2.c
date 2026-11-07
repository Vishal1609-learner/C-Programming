#include <stdio.h>
int main ()
{
    int score=40;
    int aggr=55;
    if (aggr>= 65 && score>= 60)
    {
        printf ("Qualified through Score and Aggregate .\n");
 }
 else if (aggr>=65 || score>= 50)
 {
    printf ("Qualified by Scrore .\n");
}
else if (!(score>40))
{
    printf("Redo \n");
}
return 0;

}