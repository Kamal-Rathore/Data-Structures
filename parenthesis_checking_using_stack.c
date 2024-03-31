#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
}

char pop(struct stack*ptr){
    if(isempty(ptr)){
        printf("stack underflow\n");
        return -1;
    }
    else{
        char x = ptr->arr[ptr->top];
        ptr->top--;
        return x;
    }
}

int parenethesis_checker(char *exp){
    struct stack *sp;
    sp->size=6;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    sp->top=-1;    

    for(int i=0;exp[i]!='\0';i++){
if(exp[i]=='('){
    push(sp,'(');
}
else if(exp[i]==')'){
if(isempty(sp))
return 0;
pop(sp);
}
    }

    if(isempty(sp))
    {
        return 1;
    }
    else{
        return 0;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                   
}

int main(){
   char * exp = "((8)(*--$$9))";
    // Check if stack is empty
    if(parenethesis_checker(exp)){
        printf("The parenthesis is matching");
    }
    else{
        printf("The parenthesis is not matching");
    }
    return 0;
}

