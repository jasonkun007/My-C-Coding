#include<stdio.h>
int main()
{
    float i;
    float p;
    float t;
    float r;
    printf("input the principal amount\n");
    scanf("%f",&p);
    printf("input the time period\n");
    scanf("%f",&t);
    printf("input the rate of interest\n");
    scanf("%f",&r);
    i= (p*t*r)/100;
    printf("the interest is %f",i);
    return 0;
}