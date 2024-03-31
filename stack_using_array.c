// LIFO(LAST IN FIRST OUT)
// used in function calls , parenthesis checker,infix to postfix
// stack is an abstract data type
// stack can be implemented using array and linkedlist
// timecomplexity is O(1) in push
// -> operator performs the deferecning and the dot operator functionalities.
#include<stdio.h>
#include<stdlib.h>

struct stack{
int top;
int size;
int *arr; // points to the array in the heap
};
int isempty(struct stack *ptr){
    if(ptr->top == -1){
       return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isfull(ptr)){
        printf("kha chale aa rhe ho jagah nhi hai %d ko kha daale\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
if(isempty(ptr)){
    printf("yeh toh khali hai\n");
}
else{
    int val  = ptr->arr[ptr->top];
    ptr->top--;
    printf("%d nikal liya isko\n",val);
}
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1; // means it is empty
    s->arr=(int*)malloc(s->size*sizeof(int));
    printf("before pushing empty : %d\n",isempty(s));
    printf("before pushing full : %d\n",isfull(s));
    push(s,56);
    
    
    printf("after pushing empty : %d\n",isempty(s));
    printf("after pushing full : %d\n",isfull(s));
    pop(s);
     printf("after pushing empty : %d\n",isempty(s));

    return 0;
}