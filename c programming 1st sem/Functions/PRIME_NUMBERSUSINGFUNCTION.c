// Prime Number
// WITHOUT ARGUMENT AND RETURN TYPE

#include<stdio.h>



int is_prime(int num)
{
    if (num<=1)
    {
        return 0; // not prime
    }
      for(int i=2;i*i<=num;i++ )
      {
        if(num % i==0)
        return 0;
      }
      return 1;// prime
    
}
void print_prime(){
   static int num;
   printf("prime numbers between 100 and 200\n");
    for(int num=100;num<=200;num++)
    {
        if(is_prime(num))


     {
        printf("%d\n",num);
     }
   
    
}
}
int main ()
{ 
   
   print_prime();
   
    return 0;
}
