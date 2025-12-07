#include<stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
if(year%4==0 && year%100==0 || year%400==0)
{
    printf("leap year,year");

}
else {
    printf("regular leap",year);
}
return 0;
}