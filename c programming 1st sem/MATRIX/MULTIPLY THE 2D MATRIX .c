// quest1
//read matrix of m*n from user and multiply each element by 3
#include<stdio.h>

int main ()

{


   int result;
   int row,col;
   printf("enter the values of row and column (from user)");
   scanf("%d %d",&row,&col);
     int mat[row][col];
   for (int i=0;i<row;i++)
   {
    for (int j=0;j<col;j++)
    {
           printf("[%d][%d]",i,j);
           scanf("%d",&mat[i][j]);
    }

   }

   printf("the values of matrix is :");

   for (int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++){
       result= mat[i][j]*3;
        printf("%d\n",result);
    }
   }
  return 0;
}
