#include<stdio.h>
#include<stdlib.h>

#define size 10
struct hastableable{
    int keys[size];
    int values[size];
    int status[size];
};


void initialize(struct hastableable *table){
for(int i=0;i<size;i++){
    table->keys[i]=-1;
    table->values[i]=-1;
    table->status[i]=0;
}
}
int hash(int key){
    return key%size;
}

void insert(struct hastableable *table,int key,int value){
    int index = hash(key);
    int i=index;
    while(table->status[i]==1){
        i = (i+1)%size;
        if(i==index){
            printf("unable to insert hash table is FULL\n");
            return;
        }
    }
    table->keys[i]=key;
    table->values[i]=value;
    table->status[i]=1;
}

int search(struct hastableable *table,int key){
    int index = hash(key);
    int i=index;

    while(table->status[i]!=0){
        if(table->keys[i]==key && table->status[i]==1){
           return table->values[i];
        }
        i=(i+1)%size;
        if(i==index){
            break;
        }
    }
    return -1;
}



int main(){
    struct hastableable table;
    initialize(&table);

    insert(&table, 10, 100);
    insert(&table, 20, 200);
    insert(&table, 30, 300);
    insert(&table, 41, 410); // collision with 10
    insert(&table, 51, 510); // collision with 1
    insert(&table, 63, 630); // collision with 3

    printf("Value for key 20: %d\n", search(&table, 20)); // should print 200
    printf("Value for key 41: %d\n", search(&table, 41)); // should print 410
    printf("Value for key 63: %d\n", search(&table, 63)); // should print 630
    printf("Value for key 50: %d\n", search(&table, 50)); // should print -1 (not found)

    return 0;
}