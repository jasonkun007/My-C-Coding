// RIGHT ANGLED TRIANGLE STAR PATTERN 
#include<stdio.h>
int  main ()
{
   int rownum=0;
 
   
   printf("enter the numbers of rows:");
   scanf("%d",&rownum);

// LOOP for pattern *
for(int row=1;row<=rownum;row++) // true // false
{
    for(int column=1;column<=row;column++)
    {
      
        // print the *
        printf("*");    //j           
                                            /* 
                                        R      *
                                               **
                                               ***
                                               ****
                                               *****
                                                   C
                                            */

       
    }
    printf("\n");
}
return 0;
}
