#include<stdio.h>
#include<math.h>
int main ()
{
   int r,sum=0,n,p;
   printf("enter a number:\n");
   scanf("%d",&n);
// while loop
   while(n!=0){
r=n%10;
        p=pow(r,3);
         sum=sum+p;
  n=n/10;
   }

      



     if (sum==n){
          printf("%d is armstrong",n);


   }


   else
   {
    printf("%d is not armstrong",n);
   }

   return 0;
   }











