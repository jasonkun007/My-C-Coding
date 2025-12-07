#include<stdbool.h>
#include<stdio.h>
#include<math.h>
 
  // to check the number is prime or not

    bool isPrime(int n)
    {  
    // 0 and 1 are not prime numbers
    if(n==0 || n==1)
        return false;
    
    
    // check divisibility of 2 to sqrt(n)
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
     return true;
}
   int main()
   {
    int N=200;
    for(int i=1;i<=N;i++){
    if(isPrime(i)){
        printf("%d\t",i);
    }

    }
    return 0;
   }
