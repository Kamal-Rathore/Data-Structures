#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linked_list_traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct node *deletion_at_value(struct node* head,int value){
    struct node *p = head;
    struct node *q= head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next  = q->next;
        free(q);
       
    }
    return head;
}
int main(){
struct node *head = (struct node*) malloc(sizeof(struct node));
struct node *first = (struct node*) malloc(sizeof(struct node));
struct node *second = (struct node*) malloc(sizeof(struct node));
struct node *third = (struct node*) malloc(sizeof(struct node));
head->data = 10;
head->next = first;
first->data = 20;
first->next=second;
second->data = 30;
second->next=third;
third->data = 40;
third->next=NULL;
printf("before deletion at a given value\n");
linked_list_traversal(head);
head = deletion_at_value(head,20);
printf("after deletion at a given value\n");
linked_list_traversal(head);
    return 0;
}