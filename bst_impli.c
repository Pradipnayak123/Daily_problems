#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* creation(int value){
    struct node*newnode = malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node*insertion(struct node*root,int value){
    if(root==NULL){
        return creation(value);
    }
    else if(value<root->data){
        root->left=insertion(root->left,value);
    }
    else if(value>root->data){
        root->right=insertion(root->right,value);
    }
    return root;
}
void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct node* root){
    if(root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int main(){
struct node* root = NULL;

    root = insertion(root, 3);
    root = insertion(root, 2);
    root = insertion(root, 5);
    root = insertion(root, 1);
    root = insertion(root, 4);
    root = insertion(root, 6);

    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);

return 0;
}