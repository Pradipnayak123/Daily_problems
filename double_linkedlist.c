#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
int main(){
    struct node*head,*temp;
    head = (struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=NULL;
    head->prev=NULL;

    temp =(struct node*) malloc(sizeof(struct node));
    temp->data=2;
    temp->prev=head;
    temp->next=NULL;
    head->next=temp;

    //display

    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
        
    }

}