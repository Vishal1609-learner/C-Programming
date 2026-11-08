#include <stdio.h>
int main ()
{
int score[3]={82,75,39};
printf("****Trainee Score****\n");
for (int i=0;i<3;i++)
{
    printf(" FA%d: %d\n",i+1,score[i]);
}
        return 0;
}