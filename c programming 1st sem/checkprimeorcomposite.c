//C program to calculate sum of odd Natural number //1,3,5,7,....N
 #include<stdio.h>
int main()

{
    int i;
    int sum=0;
    int N;
printf("enter the value of number\n");
scanf("%f",&N);
for(i=1;i<N;i++)
{
    sum +=i;
}
printf("sum of odd number=%d",sum);
 return 0;
}
