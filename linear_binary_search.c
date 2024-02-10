// time complexity of linear search is: O(n)
// time complexity of binary search is: O(logn)

//--------->linear search<-----------
/*
#include<stdio.h>
int linear_search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[]={11,12,13,14,15};
    int num_element_array= sizeof(arr)/sizeof(int);
    int element=14;
    int search_at_index= linear_search(arr,num_element_array,element);
    printf("%d",search_at_index);
    return 0;
}
*/


//----------------->binary search using iterative method<-------------
/*
#include<stdio.h>
int binary_search(int arr[],int x,int low,int high){
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        return -1;
    }
    
}
int main(){
int arr[]={11,12,13,14,15};
int x =13;
int high=sizeof(arr)/sizeof(int);
int index= binary_search(arr,x,0,high-1);
printf("%d",index);
    return 0;
}
*/



//-------------Binary search using recursive method-------------
#include<stdio.h>
int binary_search(int arr[],int x,int low,int high ){
    if(high>=low){
        int mid = low+(high-low)/2;

        if(arr[mid]==x)
        return mid;
    
     if(arr[mid]>x)
     return binary_search(arr,x,low,mid-1);
    
    if(arr[mid]<x)
    return binary_search(arr,x,mid+1,high);
    }
    return -1;
}
int main(){
    int arr[]={11,12,13,14,15};
    int x=14;
    
    int high=sizeof(arr)/sizeof(int);
    int result=binary_search(arr,x,0,high);
    if(result==-1)
    printf("not found\n");
    printf("%d",result);

    
    return 0;
}
// complexity bestcase:O(1) worst,averagecase:O(logn)