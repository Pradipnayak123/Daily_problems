#include <stdio.h>

int n=5;
int stack[5];
int top =-1;
void push(char ch){
    if(top==4){
        printf("Stack is Full");
        
    }
    else{
        top++;
        stack[top]=ch;
    }

}
void pop(){
    if(top==-1){
        printf("Stack is Empty");
        
    }
    else{
        printf("%c",stack[top]);
        top--;
        
    }
}
int main(){
push('p');
push('r');
push('a');
push('d');
    for(int i =1 ;i<n;i++){
        pop();
    }
    return 0;
}