#include<stdio.h>
#include<stdlib.h>
#define size 10
struct hashtable{
int keys[size];
int values[size];
int status[size];
};
void initialize(struct hashtable *table){
    for(int i=0;i<size;i++){
        table->keys[i]=-1;
        table->values[i]=-1;
        table->status[i]=0;
    }
}

int hash(int key){
    return key%size;
}

void insert(struct hashtable *table,int key,int value){
    int index=hash(key);
    int i=index;
    while(table->status[i]==1){
        i=(i+1)%size;
        if(i==index){
            printf("hashtable is full\n");
            return;

        }
    }
    table->keys[i]=key;
    table->values[i]=value;
    table->status[i]=1;

}

int search(struct hashtable *table,int key){
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
    struct hashtable table;
    initialize(&table);

    insert(&table,10,100);
    insert(&table,20,200);
    insert(&table,30,300);
    insert(&table,40,400);
    insert(&table,50,500);
    
    int value1= search(&table,20);
    int value2= search(&table,30);
    int value3 = search(&table,60);

    printf("values for key 20 is %d\n",value1);
    printf("values for key 30 is %d\n",value2);
    printf("values for key 60 is %d\n",value3);


    return 0;
}