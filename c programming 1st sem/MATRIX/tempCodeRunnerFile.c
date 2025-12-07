// Factorial of a given number from user

// 4!=4.3.2.1=24

#include<stdio.h>
int main ()
{
    int i,num,facto=1;
    printf("enter a number from user");
    scanf("%d",&num);
    
    


    for ( i=num;i>=0;i--){
    
          facto=facto*i;
          if(i==0)
    

        return 1;
    
    }

    printf("%d",facto);
    return 0;



}