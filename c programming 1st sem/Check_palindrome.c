#include<stdio.h>

int main ()
{
    int Original,Reversed=0,remainder,n;
    printf("enter a number:\n");
    scanf("%d",&n);
    Original=n;


    while (n!=0)
    {
        remainder=n%10;
        Reversed+=remainder;
            n=n/10;

    }

          if(Original==Reversed)
    {
        printf("%d is palindrome ",Original);

    }  

    else {
        printf("%d is not palindrome",Original);
    }
   
    
    return 0;
    
}