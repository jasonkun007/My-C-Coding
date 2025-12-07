//Calculate average of three given numbers by user
#include<stdio.h>
int main ()
{
    float n1,n2,n3;
    float avg;
    printf("enter the value of numbers\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    avg=(n1+n2+n3)/3;
    printf("the average of %f,%f,%f is %f",n1,n2,n3,avg);
    return 0;
}