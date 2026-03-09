#include <stdio.h>
int max = 5;
int queue[5] = {1,2,3,4,5};
int f = 0;
int r = 4;
void dequeue(){
    if(f==-1&&r==-1){
        printf("Queue is Empty");
    }
    else if(f==r){
        f==r==-1;
    }
    else{
        f++;
    }
}
int main(){
    dequeue();
    dequeue();
    return 0;
}