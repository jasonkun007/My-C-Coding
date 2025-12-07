#include<stdio.h>
int main ()
{
    int arr[5];
    for( int i=0;i<5;i++){
       printf("Enter element %d\n",i+1);
       scanf("%d",&arr[i]);
    }
      // to print the reverse of numbers
      for ( int i=4;i>=0;i--)
{
    printf("%d\t",arr[i]);

}
return 0;
    }
    
