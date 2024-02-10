#include<stdio.h>
// insertion operation at the particular index
void display(int arr[] ,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
  printf("\n");
}
int indinsertion(int arr[] , int size, int capacity, int element, int index){
if(size>=capacity){
    return -1; // means array is already full 
}
for(int i=size-1;i>=index;i--){
    arr[i+1] = arr[i];
}
arr[index] = element;
return 1;
}
int main(){
int arr[10]={1,2,3,4,5};
display(arr,5); // display before insertion
int size = 5; 
int element = 45;
int index = 3;
//suppose you want to insert an element at the particular index.
indinsertion(arr,size,10,element,index);
size++;
display(arr,size); // display after insertion
    return 0;
}
