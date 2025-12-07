// WAP to print the  sum  of individual row of a given matrix
#include <stdio.h>

int main() {
    // m is taken for number of rows and n is taken for number of columns
    int m,n;
    // take input from user 
    printf("enter the number of rows and columns:");
    scanf("%d %d",m,n);
    // Initialise the matrix array

    int matrix[m][n];
    // Commands to input the elements
    printf(" enter the elements in the matrix:\n");
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           
            scanf("%d",matrix[i][j]);
        }
    }
    printf("\n the elements in the matrix:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",matrix[i][j]);
      
        }
        printf("\n");
    }

    // calculate the sum of row;
   
    for (int i=0;i<m;i++)
    {
         int rowSum=0;
        for(int j=0;j<n;j++)
        {
            
            rowSum+=matrix[i][j];
        }
          printf("%d",rowSum);
   
    }
   // Column Sum
   
    for(int i=0;i<n;i++){
         int Colsum=0;
        for(int j=0;j<n;j++){
            Colsum+=matrix[j][i];
        }
        printf("%d",Colsum);
    }
    
    return 0;
}
     
