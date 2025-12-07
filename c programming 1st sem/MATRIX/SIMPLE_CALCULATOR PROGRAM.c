// write a program to make a simple calculator
#include<stdio.h>
int main ()
{
    int n1,n2;
    int cal,i;
    // USER-INPUT (PROMPT) FOR DATA
    printf("enter the value of two numbers:");
    scanf("%d %d",&n1,&n2);

    // operator like +,-,*,/,%...
    
     

   // ARRAY OF SIMPLE CALCULATOR SIZE ==5
   //0=ADD,1=SUB,2=MULTIPLY,3=DIVIDE & 4= REMAINDER
     int c[5];
 for (int i=0;i<5;i++)
  {    printf("positive integer less than 5-[%d]",i);
      scanf("%d",&c[i]);
      if(c[i]==0)
       {
         cal= n1+n2;
         printf("The sum is %d\n",cal);
       }
    else   if(c[i]==1)
       {
         cal= n1-n2;
         printf("The difference is %d\n",cal);
       }
 
 if(c[i]==2)
       {
         cal= n1*n2;
         printf(" The product is %d\n",cal);
       }
       if(c[i]==3)
       {
         cal= n1/n2;
         printf("The division is     %d\n",cal);
       }
       if(c[i]==4)
       {
         cal= n1%n2;
         printf(" The remainder is    %d\n",cal);
       }

     
     
  } 
    
    
      
     
     
     return 0;

     
}