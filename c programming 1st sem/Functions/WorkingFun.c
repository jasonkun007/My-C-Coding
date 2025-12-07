// HOW DOES A FUNCTION WORKS IN C LANGUAGE


void england()
{
    printf("You are British\n");
    return;
}




void austrailia()
{
    printf("You are Austrailian\n");
    england();
    return ;
}

 void india ()
 {
      printf("You are Indian\n");
      austrailia(); // CALL

      return ; // TATA-BYEBYE
 }




#include<stdio.h>
int main ()
{
    india(); // FUNCTION CALL
    return 0;//Tata
}