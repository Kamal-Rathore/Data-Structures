// stack is full when the heap memory is exhausted and the pointer points to the NULL
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int isempty(struct node *top){
    if(top==NULL){
       return 1;
    }
    else{
return 0;
    }
}

int isfull(struct node*top){
    struct node *p = (struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node* push(struct node*top,int x){
    if(isfull(top)){
        printf("stack overflow\n");
    }
    else{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->next=top;
    top=p;
    return top;
    }

}

int pop(struct node**top){
    if(isempty(*top)){
        printf("stack underflow\n");
    }
    else{
        struct node *p =*top;
        int x = p->data;
         *top=(*top)->next;
        free(p);
        return x;
       
    }
}

void linked_list_traversal(struct node*ptr){
    while(ptr!=NULL){
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
struct node* top=NULL; // means there is no node in the linked list
top = push(top,55);
top=push(top,56);
top=push(top,57);
linked_list_traversal(top);
int element=pop(&top);
printf("popped element is %d\n",element);
linked_list_traversal(top);
    return 0;
}