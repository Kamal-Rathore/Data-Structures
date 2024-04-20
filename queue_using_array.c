#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->rear == q->front){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct queue *q){
    if(q->rear == q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("overflow\n");
    }
    else{
        q->rear++;
        q->arr[q->rear]=val;
    }
}

int dequeue(struct queue *q ){
    int a=-1;
if(isEmpty(q)){
    printf("already empty\n");
}
else{
    q->front++;
   a = q->arr[q->front];
}
return a;
}
int main(){
    struct queue *q;
    q->size=10;
    q->front=-1;
    q->rear=-1;
    q->arr = (int*)malloc(q->size*sizeof(int));
    printf("queue is %d\n",isEmpty(q));
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    printf("queue is %d\n",isEmpty(q));
    printf("queue is %d\n",isFull(q));
    
    printf("dequeuing the element %d\n",dequeue(q));
    printf("dequeuing the element %d\n",dequeue(q));
    printf("queue is %d\n",isEmpty(q));
    printf("queue is %d\n",isFull(q));
    



    return 0;
}