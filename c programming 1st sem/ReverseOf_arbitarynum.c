//Write a program to find the reverse of given number of arbitary length


#include<stdio.h>
int main (){
     int re=0,r,n;
     printf("enter the value of n:\n");
     scanf("%d",&n);
     // to use logic 
    //135
    while (n>0)
    {
        
        r=n%10;
    re=re*10+r;
    n=n/10;
    
    }
    
    printf("the reverse of the number is %d",re);

    return 0;
    


}