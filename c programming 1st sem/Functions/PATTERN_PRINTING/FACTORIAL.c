//WITH ARGUMENT AND NO-RETURN TYPE
#include<stdio.h>
int main ()
{
    int number;
    printf("enter the value of number:");
    scanf("%d",&number);
      fact(number);
    return 0;
}

void fact(int n ){
    int i,f=1;
    for(int i=1;i<=n;i++)
   {
         f*=i;
         printf("the factorial of %d is %d\n ",n,f);
   }
}