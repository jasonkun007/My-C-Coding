// WITH ARGUMENT AND RETURN TYPE
#include<stdio.h>


int fact(int n){
    int i,f=1;
    for(int i=1;i<=n;i++)
    {
       f=f*i;
    }
    return f;
}

    

int main ()
{
    int number,result;
    printf("enter the value of number:");
    scanf("%d",&number);

    result=fact(number);

    printf("%d",result);
    return 0;
}
