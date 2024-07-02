// means the array representation of hashing
#include<stdio.h>
#include<stdlib.h>

#define size 10
struct node{
    int data;
    struct node* next; //self referential
};

int hash_function(int key){
    return key%size;
}
struct node* hashtable[size];
void initialise(){
    for(int i=0;i<size;i++){
        hashtable[i]=NULL;
    }
}

void insert(int key){
    int index = hash_function(key);
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
      newnode->data=key;
      newnode->next=NULL;


    if(hashtable[index]==NULL){
        hashtable[index]=newnode;
      
    }
    else{
        struct node* temp = hashtable[index];
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void search(int key){
    int index = hash_function(key);
    struct node* temp = hashtable[index];
    while(temp!=NULL){
    if(temp->data==key){
        printf("element found at index %d\n",index);
        return;
    }
    temp=temp->next;
    }
    printf("key not found\n");
    
}
int main(){
    initialise();

    insert(20);
    insert(33);
    insert(21);
    insert(29);
    insert(38);

    search(22);
    search(38);
    search(21);



    return 0;
}

