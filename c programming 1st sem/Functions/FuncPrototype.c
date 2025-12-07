
#include<stdio.h>
int main ()
{
    void india(); // Prototype
    india(); // FUNCTION CALL
    return 0;//Tata
}

void india ()
 {
      printf("You are Indian\n");
      void austrailia(); // Prototype
      austrailia(); // CALL

      return ; // TATA-BYEBYE
 }

void austrailia()
{
    printf("You are Austrailian\n");
    void england();
    england();
    return ;
}

void england()
{
    printf("You are British\n");
    return;
}











