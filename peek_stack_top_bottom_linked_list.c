#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int peek(struct node*top,int pos){
    struct node*ptr = top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++ ){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

struct node* push(struct node*top , int x){
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next=top;
    top=ptr;
    return top;
}
void linked_list_traversal(struct node*top){
    while(top!=NULL){
        printf("element is:%d\n",top->data);
        top=top->next;
    }
}
int main(){
struct node*top=NULL;

top=push(top,55);
top=push(top,56);
top=push(top,57);
linked_list_traversal(top);
// int element = peek(top,2);
// printf("peeked element is %d\n",element);

for(int i=1;i<=3;i++){
    printf("element %d is : %d\n",i,peek(top,i));
}
    return 0;
}