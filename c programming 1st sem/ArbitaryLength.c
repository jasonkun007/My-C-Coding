// Write a program to find sum of digits of a given number of arbitary length
#include<stdio.h>
int main ()
{
    int sum=0,n,r;
    // Input the data from user
    printf("enter the value of n:\n");
    scanf("%d",&n);
// what is arbitary number 
// Arbitary number is any possible value in the real line without any certain conditions
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;    
    }
    // print the value of sum
    printf("the value of sum of digits of an arbitary value is %d",sum);
    return 0;
}