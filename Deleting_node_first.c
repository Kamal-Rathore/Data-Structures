#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void linked_list_traversal(struct node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node * deletionat_first(struct node * head){
    struct node* ptr= head;
    head = head->next;
    free(ptr);
    return head;
}
int main(){
struct node* head= (struct node*) malloc(sizeof(struct node));
struct node* second= (struct node*) malloc(sizeof(struct node));
struct node* third= (struct node*) malloc(sizeof(struct node));
struct node* fourth= (struct node*) malloc(sizeof(struct node));

head->data = 3;
second->data = 4;
third->data = 5;
fourth->data = 6;
head->next  = second;
second->next = third;
third->next = fourth;
fourth->next = NULL;

printf("before deletion\n");
linked_list_traversal(head);
head = deletionat_first(head);
printf("after deletion\n");
linked_list_traversal(head);


    return 0;
}