 //WAP to check the given number is prime  or not
#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
     // 0 and 1 are not prime number so assign it with flag=1
    if(n==1 || n==0){
      flag=1;
    }
   
   // if n is divide by i then n is non prime , value flag to 1
    for(i=2;i<n;++i){
        if (n%i==0){
            flag=1;
            break;
        }
         
    }  // flag is 0 for prime number
     if(flag==0){
        printf("It is prime number:\n",n);
     }
     else {
        printf("It is not prime number:\n",n);
     }
       return 0; 
    }
    

