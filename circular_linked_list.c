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

struct node* insert_atlast(struct node*head,int val){
    struct node*ptr;
    ptr=head;
    while(ptr!=head){
        ptr=ptr->next;
    }
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    ptr->next=newnode;
    newnode->next=head;
    
}

struct node * deletionat_first(struct node * head){
   struct node*temp=head;
   
   while(temp!=head){
    temp=temp->next;
   }
  temp->next=head->next->next;
  struct node *a = head;
  head=head->next;
  return head;
  free(a);

}

struct node* deletion_at_pos(struct node*head,int pos){
    struct node*ptr;
    ptr=head;
    int count=1;
    while(count!=pos-1){
        ptr=ptr->next;
        count++;
    }

    struct node* todelete = ptr->next;
    ptr->next=ptr->next->next;
    free(todelete);
    return head;
    

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
// linked_list_traversal(head);
// head=insert_atlast(head,7);
// linked_list_traversal(head);
// head=deletionat_first(head);
// linked_list_traversal(head);
head=deletion_at_pos(head,2);
linked_list_traversal(head);
    return 0;
}