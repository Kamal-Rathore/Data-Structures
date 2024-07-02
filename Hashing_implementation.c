#include <stdio.h>
#include <stdlib.h>

#define size 10
struct hashtable
{
    int keys[size];
    int values[size];
    int occupied[size];
};

void initialize(struct hashtable *table)
{
    for (int i = 0; i < size; i++)
    {
        table->keys[i] = -1;
        table->values[i] = -1;
        table->occupied[i] = 0;
    }
}

int hash(int key)
{
    return key % size;
}
void insert(struct hashtable *table, int key, int value)
{
    int index = hash(key);
    while (table->occupied[index])
    {
        index = (index + 1) % size;
    }
    table->keys[index] = key;
    table->values[index] = value;
    table->occupied[index] = 1;
}

int search(struct hashtable *table, int key)
{
    int index = hash(key);
    while (table->occupied[index])
    {
        if (table->keys[index] == key)
        {
            return table->values[index];
        }
        index = (index + 1) % size;
    }
    return -1;
}
int main()
{
    struct hashtable table;
    initialize(&table);
    insert(&table, 10, 100);
    insert(&table, 20, 200);
    insert(&table, 30, 300);
    insert(&table, 40, 400);

    int value1=  search(&table,10);
     int value2=  search(&table,40);
      int value3=  search(&table,50);

      printf("value for key 10 is %d\n",value1);
       printf("value for key 40 is %d\n",value2);
        printf("value for key 50 is %d\n",value3);


    return 0;
}

