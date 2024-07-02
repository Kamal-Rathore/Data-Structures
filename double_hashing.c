#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Hash table structure
struct HashTable {
    int* keys;
    int* values;
    int* status; // 0: empty, 1: filled, -1: deleted
};

// Function to initialize the hash table
void initHashTable(struct HashTable* ht) {
    ht->keys = (int*)malloc(SIZE * sizeof(int));
    ht->values = (int*)malloc(SIZE * sizeof(int));
    ht->status = (int*)malloc(SIZE * sizeof(int));

    for (int i = 0; i < SIZE; i++) {
        ht->keys[i] = -1; // -1 indicates empty
        ht->values[i] = -1;
        ht->status[i] = 0;
    }
}

// Hash function 1
int hashFunction1(int key) {
    return key % SIZE;
}

// Hash function 2
int hashFunction2(int key) {
    return (key % (SIZE - 1)) + 1; // Ensure the result is not 0
}

// Double hashing function
int doubleHash(int index, int attempt, int key) {
    return (index + attempt * hashFunction2(key)) % SIZE;
}

// Function to insert a key-value pair into the hash table using double hashing
void insert(struct HashTable* ht, int key, int value) {
    int index = hashFunction1(key);
    int attempt = 0;
    int i = index;

    while (ht->status[i] == 1) {
        attempt++;
        i = doubleHash(index, attempt, key);
        if (attempt >= SIZE) {
            printf("Hash table is full. Unable to insert.\n");
            return;
        }
    }

    ht->keys[i] = key;
    ht->values[i] = value;
    ht->status[i] = 1; // mark as filled
}

// Function to search for a key in the hash table
int search(struct HashTable* ht, int key) {
    int index = hashFunction1(key);
    int attempt = 0;
    int i = index;

    while (ht->status[i] != 0) {
        if (ht->keys[i] == key && ht->status[i] == 1) {
            return ht->values[i]; // found
        }
        attempt++;
        i = doubleHash(index, attempt, key);
        if (attempt >= SIZE || i == index) {
            break; // reached starting point again, key not found
        }
    }

    return -1; // not found
}

int main() {
    struct HashTable ht;
    initHashTable(&ht);

    insert(&ht, 10, 100);
    insert(&ht, 20, 200);
    insert(&ht, 30, 300);
    insert(&ht, 41, 410); // collision with 10
    insert(&ht, 51, 510); // collision with 1
    insert(&ht, 63, 630); // collision with 3

    printf("Value for key 20: %d\n", search(&ht, 20)); // should print 200
    printf("Value for key 41: %d\n", search(&ht, 41)); // should print 410
    printf("Value for key 63: %d\n", search(&ht, 63)); // should print 630
    printf("Value for key 50: %d\n", search(&ht, 50)); // should print -1 (not found)

    return 0;
}
