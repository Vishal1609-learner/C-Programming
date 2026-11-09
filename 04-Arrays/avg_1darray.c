#include <stdio.h>

int main()
{
    int score[5],sum=0,i;
    float avg;
    printf("****Trainee Score***** \n ");
    for(i=0;i<5;i++)
    {
    printf("Enter the Score of Trainee %d: ",i+1);
    scanf("%d",&score[i]);
    sum+=score[i];
}
   
    
    printf("Total Sum of Scores of 5 Trainees=%d \n",sum );
    printf("The Average sum of all the scores of the Trainees=%.2f \n ",avg=sum/5.0);
    

    return 0;
}