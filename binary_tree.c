// binary tree has atmost two children .
// n nodes = n-1 edges
// degree of the tree is the highest degree of the all nodes present among the tree
// tree is the non-lineary data struct ideal for representing hierarichal struct.

// types of binary tree
/*
1. full or strict bianry tree -> either 0 or 2 children
2. perfect binary tree-> all leaf nodes are on the same level and each  internal nodes has exactly 2 children
3.complete binary tree-> all the levels are compelety filled and the except the last level and the key are align to the left as possible
4. degenrate tree-> parent nodes has exaclty one child
5. skewed trees-> left skewed or right skewed

representation of bianry tree is  doubly linked repres. but not linkedlist because linkedlist is linear
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

};
struct node* create_node(int data){
    struct node*n;
    n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main(){
    struct node *p = create_node(2);
    struct node *p1 = create_node(3);
    struct node *p2 = create_node(4);
    p->left=p1;
    p->right=p2;

   

    return 0;
}