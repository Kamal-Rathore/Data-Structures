
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node *next;
};

void linked_list_traversal_front(struct node *head){
    struct node*ptr;
    ptr=head;
    do{
        
    printf("element is: %d\n",ptr->data);
     ptr=ptr->next;
    }
  while(ptr!=NULL);
}
void linked_list_traversal_back(struct node *fourth){
    struct node*ptr;
    ptr=fourth;
    do{
        
    printf("element is: %d\n",ptr->data);
     ptr=ptr->prev;
    }
  while(ptr!=NULL);
}
int main(){
struct node*head = (struct node*) malloc(sizeof(struct node));
struct node*second = (struct node*) malloc(sizeof(struct node));
struct node*third = (struct node*) malloc(sizeof(struct node));
struct node*fourth = (struct node*) malloc(sizeof(struct node));
head->data=4;
head->prev=NULL;
head->next=second;

second->data=3;
second->prev=head;
second->next=third;

third->data=6;
third->prev=second;
third->next=fourth;

fourth->data=1;
fourth->prev=third;
fourth->next=NULL;
printf("forwrd traversal of linkedlist\n");
linked_list_traversal_front(head);
printf("backward traversal of linkedlist\n");
linked_list_traversal_back(fourth);
    return 0;
}