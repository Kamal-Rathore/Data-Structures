#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node{
    int keys;
    int values;
    struct node* next;
};

struct hashtable{
struct node* table[size];
};
void initialise(struct hashtable *table1){
    for(int i=0;i<size;i++){
        table1->table[i]=NULL;
    }
}

int hash_function(int key){
    return key%size;
}
struct node* create_node(int key,int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newnode->keys=key;
    newnode->values=value;
    newnode->next=NULL;
}

void insert(struct hashtable *table1,int key,int value){
    int index = hash_function(key);
    struct node *newnode = create_node(key,value);
    if(table1->table[index]==NULL){
        table1->table[index]=newnode;
    }
    else{
        newnode->next = table1->table[index]; // it inserted at hte start of the linked list
        table1->table[index]=newnode;
    }
   
}

int search(struct hashtable *table1 , int key){
    int index = hash_function(key);
    struct node *temp = table1->table[index]; 
    while(temp!=NULL){
        if(temp->keys==key){
            return temp->values;
        }
        temp=temp->next;
    }
    return -1;
}
int main(){

    struct hashtable table2;
    initialise(&table2);
    insert(&table2,2,21);
    insert(&table2,5,26);
    insert(&table2,8,27);

    int value1= search(&table2,2);
    int value2 = search(&table2,9);
    printf("value for the key %d is: %d\n",2,value1);
    printf("value for the key %d is: %d\n",9,value2);


   return 0;
}