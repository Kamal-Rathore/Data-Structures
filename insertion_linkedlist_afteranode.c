// time complexity is O(1).
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void linkedlist_traversal(struct node* ptr){
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node* insertionafter(struct node*head , struct node* prevnode , int data){
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    ptr->data = data;
    return head;
    
    }
int main(){
    struct node* head;
    struct node * second;
    struct node *third;

    head = (struct node*) malloc (sizeof(struct node));
     second = (struct node*) malloc (sizeof(struct node));
      third = (struct node*) malloc (sizeof(struct node));

      head->data=10;
      head->next = second;

      second->data=20;
      second->next = third;
      
      third->data=30;
      third->next = NULL;

      printf("before insertion after a node\n");
      linkedlist_traversal(head);
      printf("after insertion after a node\n");
      head = insertionafter(head,second,40);
      linkedlist_traversal(head);

      

    return 0;
}