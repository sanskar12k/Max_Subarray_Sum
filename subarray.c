#include<stdio.h>

int subarraySum(int n, int A[]){
    int maxSum = 0;

    for(int i = 0;i<n;i++){
     if(A[i]< 0){    //if  A[i] is negative no. then it is not added otherwise it is added
         continue;
     }
     maxSum += A[i]; 
    }
    return maxSum;
}

int main() {
    int n;
    int A[100];
   printf("Enter the value of n: ");  
    scanf("%d" , &n);  //Taking no. of elements in an array

    for (int i = 0; i<n;i++){
    printf("Enter the value of A[%d]: ",i+1);
        scanf("%d" ,&A[i]); //Taking values of A[i]
    }
   
    printf("Value of max subarray sum = %d" ,subarraySum(n,A)); //Printng the value of maximum subarray sum 

return 0;
}