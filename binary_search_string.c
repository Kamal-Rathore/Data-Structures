
#include<stdio.h>
#include<string.h>
int binary_search(char arr[][100],char x[100],int n){
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(strcmp(x,arr[mid])==0)
        return mid;
        if(strcmp(x,arr[mid])<0)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main(){
char arr[][100]={"cherry","apple","banana","grapes"};
char x[100]={"grapes"};
int n=4;
int result=binary_search(arr,x,n);
if(result==-1)
printf("not found\n");
else
printf("String found at index %d\n",result);
return 0;
}



