#include <stdio.h>
#include <string.h>

#define MAX 1000

char stack[MAX];
int top;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

int isBalanced(char expr[]) {
    top = -1;  // reset stack for each test case

    for (int i = 0; i < strlen(expr); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            char popped = pop();
            if (!isMatchingPair(popped, ch)) {
                return 0;
            }
        }
    }

    return (top == -1);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char expr[MAX];
        scanf("%s", expr);

        if (isBalanced(expr))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}