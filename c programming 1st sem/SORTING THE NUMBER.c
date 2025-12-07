//Program to sort elements in ascending order
#include<stdio.h>
void main ()
{
    int arr[10];
     int i;
      int j;
       int n;
         int tmp;
    //Print the no of terms to be stored in the array
         printf("Input the number of terms:\n");
    //Store the number of terms in the location of n variable
           scanf("%d",&n);

            //Input the no of terms in the array
            printf("Enter the %d terms in the array:\n");
            
            //Implementation of the index of the array using for loop
             for(i=0;i<n;i++)
             {
                printf("index-%d=",i);
                // store the index in the array
                scanf("%d",&arr[i]);
             }

             //Sort the elements using buble sort algoritm
             for(i=0;i<n;i++){
                for(j=i+1;j<n;j++)
                {
                if(arr[j]<arr[i])
                {
                    //Swap elements which are in the wrong order
                    tmp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=tmp;
                }
                }
             }
              //print the elements 
              printf("\n elements of the array are:");
              // position of index with respective element
              for(i=0;i<n;i++){
                printf("%d\n",arr[i]);
              }

}
