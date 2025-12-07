#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("give input to the numbers");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n2>n3)
    {
        printf("largest number = %d",n1);
    }
     if(n2>n1 && n1>n3)
    {
        printf("largest number = %d",n2);
    }
     if (n3>n1 && n1>n2)
    {
        printf(" largest number =%d",n3);
    }
    return 0;
}