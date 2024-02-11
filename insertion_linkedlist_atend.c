// time complexity is O(n).
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node* ptr){
   
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct node* insertion_at_end(struct node* head,int data){
    struct node *ptr = (struct node*) malloc (sizeof(struct node));
    struct node* p = head ;
    while(p->next!=NULL){
        p = p->next;

    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}
int main(){
struct node * first;
struct node * second;
struct node * third;
first = (struct node*) malloc(sizeof(struct node));
second = (struct node*) malloc(sizeof(struct node));
third = (struct node*) malloc(sizeof(struct node));

first->data =11;
first->next=second;

second->data =13;
second->next=third;

third->data =15;
third->next=NULL;

printf("before insertion at end\n");
linked_list_traversal(first);
first=insertion_at_end(first,17);
printf("\n");
printf("after insertion at end\n");
linked_list_traversal(first);

    return 0;

}
