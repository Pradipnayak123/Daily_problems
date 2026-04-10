#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* creation(){
    int x;
    printf("Enter Data (-1 for no node): ");
    scanf("%d", &x);

    if(x == -1){
        return NULL;   // very important
    }

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;

    printf("Enter the left child of %d\n", x);
    newnode->left = creation();

    printf("Enter the right child of %d\n", x);
    newnode->right = creation();

    return newnode;
}

int main(){
    struct node* root = NULL;
    root = creation();

    return 0;
}