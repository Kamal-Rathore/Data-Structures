#include<stdio.h>
void max_hepify(int a[],int,int);
void max_heap(int a[],int beg,int end){
    for(int i=end/2;i>=beg;i--){
        max_hepify(a,i,end);
    }
}
void max_hepify(int a[],int current,int size){
    int max=current;
    int l = 2*current;
    int r = (2*current)+1;
    int temp;
    if(l<=size && a[l]>a[max])
    max=l;
    if(r<=size && a[r]>a[max])
    max=r;
    if(current!=max){
        temp = a[current];
        a[current]=a[max];
        a[max]=temp;
        max_hepify(a,max,size);
    }
    
    }
    void heap_sort(int a[],int size){
        int temp;
        for(int i=size;i>=2;i--){
            temp=a[1];
            a[1]=a[i];
            a[i]=temp;
            max_hepify(a,1,i-1);
        }
    }
int main(){
    int a[10];
    int i;
    printf("enter the elements\n");
    for(int i=1;i<10;i++){
        scanf("%d",&a[i]);
    }
    max_heap(a,1,9);
    heap_sort(a,9);
    printf("sorted array\n");
    for(int i=1;i<10;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}