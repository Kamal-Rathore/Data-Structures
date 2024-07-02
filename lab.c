#include<stdio.h>
void max_heapify(int a[],int ,int);
void max_heap(int a[],int beg,int end){
    for(int i=end/2;i>=beg;i++){
        max_heapify(a,i,end);
    }
}
void max_heapify(int a[],int current,int size){
    int max=current;
    int low=2*current;

    int high=(2*current)+1;
    int temp;
    if(low<=size && a[low]>a[max])
    max=low;
    if(high<=size && a[high]<a[max])
    max=high;
    if(current!=max){
        temp=a[current];
        a[current]=a[max];
        a[max]=temp;
        max_heapify(a,max,size);

    }



}
void heapsort(int a[],int size){
    int temp;
for(int i=size;i>=2;i--){
    temp=a[1];
    a[1]=a[i];
    a[i]=temp;
    max_heapify(a,0,i-1);
}
}
int main(){
int a[10];
int i;
printf("enter the elements\n");
for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
}
max_heap(a,0,9);
heapsort(a,9);
printf("sorted array\n");
for(int i=0;i<10;i++){
    printf("%d\t",a[i]);
}
    return 0;
}