// Wap to sort elements of an array in ascending order
#include <stdio.h>
//1320
void main() {
    int arr[10];
    int i,n,j,tmp; 
    
    //Take input data from user
    printf("input the no of terms :\n");
    
    //input the data in the location of n variable
    scanf("%d",&n);
    
    
    //take the n Var data in the array
    printf("input the %d elements in the array:\n");
    
    //Loop Condition for identification of index with the data
    for (i=0;i<n;i++){
        //naming the index
        printf("index-%d=",i);
        // store index with respect to array
        scanf("%d",&arr[i]);
    }
    //sorting the element using bubble sort algorithm
    //using for loop (VIP)

    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                //swap elements because they are in wrong order
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    // print the sorted element in ascending order
    printf(" elements of array in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
}
} 
    
    
    
    
    
    
    
    
    
    
    
    
    