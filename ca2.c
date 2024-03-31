


#include<stdio.h>
#include<stdlib.h>
struct node*f = NULL;
struct node*r = NULL;

struct node{
    int data;
    struct node* next;
};

void linked_list_traversal(struct node* ptr){
    printf("printing the nodes of the linked_list\n");
    while(ptr!=NULL){
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}

void enqueue(int val){
    struct node*n = (struct node*)malloc(sizeof(struct node));

    if(n==NULL){
        printf("queue is full\n");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
        f=r=n;
    }
    else{
        r->next=n;
        r=n;

    }
    }
    
}
int dequeue(){
int val=-1;
struct node*ptr=f;
if(f==NULL){

    printf("queue is empty\n");
}
else{
    f=f->next;
    val=ptr->data;
    free(ptr);
}
return val;
}

int main(){
    printf("before the enqueue and dequeue\n");
    linked_list_traversal(f);
    
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    printf("dequeuing element is %d\n",dequeue());
    printf("dequeuing element is %d\n",dequeue());
    linked_list_traversal(f);
    return 0;
    
}

