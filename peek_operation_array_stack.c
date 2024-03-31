#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr; // points to the array in the heap
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("stack underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *ptr, int pos)
{
    int arrind = ptr->top - pos + 1;
    if (arrind < 0)
    {
        printf("not a valid position\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrind];
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1; // means it is empty
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("before pushing empty : %d\n", isempty(s));
    printf("before pushing full : %d\n", isfull(s));
    push(s, 56);
    push(s, 57);
    push(s, 58);
    push(s, 59);
    push(s, 60);
    push(s, 61);
    push(s, 62);
    push(s, 63);
    pop(s);
    for (int j = 1; j <= s->top + 1; j++)
    {
        printf("the value at position %d is %d\n", j, peek(s, j));
    }
    return 0;
}

