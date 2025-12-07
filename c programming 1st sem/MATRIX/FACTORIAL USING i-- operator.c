// Factorial of a given number from user

// 4!=4.3.2.1=24

#include<stdio.h>
int main ()
{
    int i,num,facto=1;
    printf("enter a number from user");
    scanf("%d",&num);
    
    


    for ( i=num;i>=1;i--){
    
          facto=facto*i;
          
    
    }

    printf("%d",facto);
    return 0;



}