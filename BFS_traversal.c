// BFS(breadth first search works on the queue data structure)
// DFS(depth first search works on the stack data structure)
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
    q->size=400;
    q->front=-1;
    q->rear=-1;
    q->arr = (int*)malloc(q->size*sizeof(int));
    int node;
    int i=0; // source from where we starts
    int visited[7]={0,0,0,0,0,0,0};
    int adj[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,0,0},
        {1,1,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf("%d",i);
    visited[i]=1;
    enqueue(q,i);
    while(!isEmpty(q)){
        node = dequeue(q);
        for(int j=0;j<7;j++){ 
            if(adj[node][j]==1 && visited[j]==0){
                visited[j]=1;
                enqueue(q,j);
                printf("%d",j);
            }
        }
    }
    return 0;
}
