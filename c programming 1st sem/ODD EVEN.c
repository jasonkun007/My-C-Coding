#include<stdio.h>
int main (){
    int num;
    printf("enter the value of number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is even",num);
        
    }
    else if(num%2==1)
    {
        printf("number is odd",num);
    }
    return 0;
}
