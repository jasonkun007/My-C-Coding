
#include<stdio.h>
int main ()



{
int row,col;
printf("enter size of rows and columns:");
scanf("%d %d",&row,&col);
  int mat[row][col];
int Matx_sum=0;
for (int i=0;i<row;i++)
{
    for(int j=0;j<col;j++){
        printf("[%d][%d]",i,j);
        scanf("%d",&mat[i][j]);

    }
}



for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

        if (i==j)
        //(i!=j)
        // (mat[i][i]==mat[j][j]) 
      {  Matx_sum+=mat[i][j];
    }
}
}
printf("%d",Matx_sum);
return 0;
}