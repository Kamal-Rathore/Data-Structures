// time complexity is O(n).

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

struct Node* insertion_between(struct Node* head,int data,int index){
    struct Node *ptr = (struct Node*) malloc (sizeof(struct Node ));
    struct Node* p = head; // head will remain same it only gives the reference to p
    int i=0;
    while(i!=index-1){
    p = p->next;
    i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next  = ptr;
    return head;
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
linkedlisttraversal(head); // before insertion in between
printf("\n");
insertion_between(head,19,2);
linkedlisttraversal(head); // after insertion in between


    return 0;
}
