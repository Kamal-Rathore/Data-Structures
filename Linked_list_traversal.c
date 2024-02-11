#include<stdio.h>
#include<stdlib.h> // for malloc function
struct Node{
    int data;
    struct Node *next; // self referencial pointer
};

// for traversal
void linkedlisttraversal(struct Node *ptr){ // ptr points to the head node 
    while(ptr!=NULL){
printf("element: %d\n",ptr->data);
ptr=ptr->next;
    }
}
int main(){
struct Node *head;
struct Node *second;
struct Node *third;
// these are allocated in the heap
head = (struct Node *)malloc(sizeof(struct Node ));
second = (struct Node *)malloc(sizeof(struct Node ));
third = (struct Node *)malloc(sizeof(struct Node ));

// links the nodes 
head->data=7;
head->next=second;

second->data=9;
second->next=third;

third->data=11;
third->next=NULL;
linkedlisttraversal(head);

    return 0;
}