#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node*top = NULL;
void push(int x){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Stack is Full");
        
    }
    newnode->data=x;
    newnode->next=top;
    top = newnode;
}

void pop(){
    struct node*temp = top;
    if(temp==NULL){
        printf("Stack is Empty");

    }
    printf("Popped Element is %d",top->data);
    
    top = top->next;
    free(temp);

}
void display(){
    struct node*temp = top;
    if(temp==NULL){
        printf("Stack is Empty");
        
    }
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
        
    }
    printf("\n");
}



int main(){
   push(1);
   push(2);
   push(3);
   push(4);
   display();
   pop();
   display();
    
    return 0;
}