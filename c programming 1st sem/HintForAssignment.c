// Mini program to get the hint of college assignment
//PerfectProgramming
#include<stdio.h>
int main()
{
    int Const;
    
    printf("enter your guess Constant  ");
    scanf("%d",&Const);
    if(Const>50 && Const<55)
    {
        printf("Do Calculus Homework");
    }
    else if (Const<=50)
    {
        printf("try a higher digit");
    }
    else if (Const>=55)
    {
        printf("try a lower digit");
    }
    return 0;
}