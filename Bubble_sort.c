// number of passes = n-1 : n is the number of elements
// mumber of comparison  = n(n-1)/2 : n is the number of elements
// complexity is O(n^2) for unsorted and O(n) for sorted array

// stable algo and adaptive
#include<stdio.h>
void print_array(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}
void Bubble_sort(int *A,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

            }
        }
    }
}
int main(){ 
    int A[] = {23,65,17,21,88,33};
    int n = 6;
    printf("before sorting\n");
    print_array(A,n);
    printf("\n");
    printf("after sorting\n");
    Bubble_sort(A,n);
    print_array(A,n);
    return 0;
}
