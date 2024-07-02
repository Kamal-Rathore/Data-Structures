#include <stdio.h>

#define MAX_SIZE 100  // Adjust as needed

typedef struct {
    int data;
    int priority;
} Item;

Item pq[MAX_SIZE];  // Priority queue array
int front = -1, rear = -1;  // Queue indices

int isEmpty() {
    return front == -1;
}

int isFull() {
    return rear == MAX_SIZE - 1;
}

void enqueue(Item item) {
    if (isFull()) {
        printf("Priority queue overflow\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        // Find the correct insertion position based on priority (higher first)
        int i = rear;
        while (i >= 0 && item.priority > pq[i].priority) {
            pq[i + 1] = pq[i];
            i--;
        }
        rear++;
        pq[i + 1] = item;
    }
}

Item dequeue() {
    if (isEmpty()) {
        printf("Priority queue underflow\n");
        return (Item){-1, -1};  // Or handle underflow differently
    }

    Item item = pq[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    return item;
}

int main() {
    Item item1 = {10, 2};
    Item item2 = {5, 1};
    Item item3 = {15, 3};

    enqueue(item1);
    enqueue(item2);
    enqueue(item3);

    printf("Dequeued item: data = %d, priority = %d\n", dequeue().data, dequeue().priority);
    printf("Dequeued item: data = %d, priority = %d\n", dequeue().data, dequeue().priority);

    return 0;
}
