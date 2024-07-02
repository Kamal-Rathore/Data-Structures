#include<stdio.h>
#include<stdlib.h>

#define size 10
struct node{
    int data;
    struct node *next;
};
struct hashtable{
    struct node* head[size];
};

struct node* createnode(int key){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next=NULL;
    return newnode;
}

void initialize(struct hashtable *table){
    for(int i=0;i<size;i++){
        table->head[i]=NULL;
    }

}

int hash(int key){
    return key%size;
}

void insert(struct hashtable *table,int key){
    int index = hash(key);
    struct node* newnode = createnode(key);
    if(table->head[index]==NULL){
        table->head[index]=newnode;
    }
    else{
        struct node* temp = table->head[index];
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;

    }
}
void display(struct hashtable *table){
    for(int i=0;i<size;i++){
        struct node* temp = table->head[i];
        printf("index %d\n",i);
        while(temp!=NULL){
            printf("%d ->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

int main(){
    struct hashtable table;
    initialize(&table);
    insert(&table,10);
     insert(&table,20);
      insert(&table,30);
      display(&table);

    return 0;
}