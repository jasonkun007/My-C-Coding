#include<stdio.h>

int main()
{
    int num;
    int i;
    printf("enter the number to check");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    
    {
        if (num%i==0)
        printf("composite number",num);
        break;
        
    }
    if (num%i!=0)
    {
        printf("prime number",num);
    }

    return 0;  
}