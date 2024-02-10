#include<stdio.h>
// deletion operation at the particular index
void display(int arr[] ,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
  printf("\n");
}
int inddeletion(int arr[] , int size, int capacity,  int index){
if(index>=capacity){
    return -1; // means index out of bounds
}
for(int i=index;i<=size-1;i++){
    arr[i] = arr[i+1];
}

return 1;
}
int main(){
int arr[10]={1,2,3,4,5};
display(arr,5); // display before deletion
int size = 5; 
int index = 3;
//suppose you want to delete an element at the particular index.
inddeletion(arr,size,10,index);
size--;
display(arr,size); // display after deletion
    return 0;
}