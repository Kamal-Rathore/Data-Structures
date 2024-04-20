
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*left;
struct node *right;
};
struct node*createnode(int data){
    struct node*n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right=NULL;
    return n;
}

struct node* search(struct node*root , int key){
    while(root!=NULL){

    if(root==NULL)
    return NULL;

    if(root->data==key){
        return root;
    }
    if(root->data<key){
        root=root->right;
    }
    else{
        root=root->left;
    }
}
return NULL;
}

int main(){
    struct node*p = createnode(5);
struct node*p1 = createnode(3);
struct node*p2 = createnode(6);
struct node*p3 = createnode(1);
struct node*p4 = createnode(4);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;

struct node *p5 = search(p,1);
if(p5!=NULL){
printf(" found: %d\n",p5->data);
}
else{
    printf("Element not found\n");
}
    return 0;
}