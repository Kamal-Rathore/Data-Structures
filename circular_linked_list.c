// for the empty singly linkedlist
// let the pointer p points to the NULL.
// for the empty circular linkedlist 
// so there is a node in which the next points to the itself(head->next=head)
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *head){
    struct node*ptr;
    ptr=head;
    do{
        printf("element is: %d\n",ptr->data);
        ptr=ptr->next;

    }
    while(ptr!=head);
}
int main(){
struct node*head = (struct node*) malloc(sizeof(struct node));
struct node*second = (struct node*) malloc(sizeof(struct node));
struct node*third = (struct node*) malloc(sizeof(struct node));
struct node*fourth = (struct node*) malloc(sizeof(struct node));
head->data=4;
head->next=second;

second->data=3;
second->next=third;

third->data=6;
third->next=fourth;

fourth->data=1;
fourth->next=head;
linked_list_traversal(head);
    return 0;
}