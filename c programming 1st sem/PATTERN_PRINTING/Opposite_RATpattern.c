#include<stdio.h>
int main ()
{
    int num=0;
    printf("enter the size of rows");
    scanf("%d",&num);

     // for loop 

     for(int row=5;row<=num;row--)                   /*   C */
     {                                            /* R*****
                                                      ****       
                                                      ***           
                                                      **
                                                      *          
                                                           */     
                                                                
        for(int col=1;col<=row;col++){
            printf("*");
            // new line important 
          
        }
           printf("\n");
     }
     return 0;
}