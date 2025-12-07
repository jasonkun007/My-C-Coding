#include<stdio.h>
void main ()
{
    int firstterm=0,secondterm=1,thirdterm,n;
    int i;
    // Input the user's data
    printf("enter the value of n:\n");
    //Store the value in the variable n
    scanf("%d",&n);

    for(i=1;i<n;++i){
        firstterm=secondterm;
        secondterm=thirdterm;
        thirdterm=firstterm+secondterm;

    }
    printf("fibonacci series is %d\n",thirdterm);
}