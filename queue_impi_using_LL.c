#include <stdio.h>
int max =100;
int front=-1;
int rear = -1;
int queue[100];
void enqueue(int x){
    if(rear == max-1){
        printf("Queue is Full");
    }
    else if(front == -1 && rear == -1){
        front =rear=0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear]= x;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue is Empty");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    dequeue();
     for(int i = front;i<=rear;i++){
        printf("%d ",queue[i]);
     }
    return 0;
}