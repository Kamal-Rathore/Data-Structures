
#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int total_size;
    int used_size;
    int *ptr; //points to dynbamically allocated memory
};

void create_array(struct myarray *a,int tsize,int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*) malloc(tsize*sizeof(int));


}

void setval(struct myarray *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("enter the element %d ",i);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
}
void show(struct myarray *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d\n",(a->ptr[i]));
    }
}
int main(){
struct myarray marks; // instance of the structure myarray
create_array(&marks,10,4);
printf("setval called\n");
setval(&marks);
printf("show called\n");
show(&marks);
    return 0;
}
// array as an abstract data type