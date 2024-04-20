// leftsubtree is lesser and the right subtree is gretaer
// inorder traversal of BST gives you the ascending sorted array 
// suppose if you want to check whether the it is BST or not then simply do the inorder traversal of that and itf it gives you the ascending orcer then it means it is a BST



// *********CHECKING BINARY SEARCH TREE OR NOT ********

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
int isBST(struct node *root){
    static struct node *prev = NULL;
    if(root!=NULL){
if(!isBST(root->left)){
    return 0;
}
if(prev!=NULL && root->data<= prev->data)
return 0;

prev=root;
return isBST(root->right);

    }
    else{
        return 1;
    }
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

printf("%d\n",isBST(p));
    return 0;
}



