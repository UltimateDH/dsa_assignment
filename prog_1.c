#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

int isBalanced(char expr[]) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
            push(expr[i]);

        if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (top == -1)
                return 0;

            if (!isMatchingPair(pop(), expr[i]))
                return 0;
        }
    }
    return (top == -1);
}

int main() {
    char expr[100];

    printf("Enter expression: ");
    fgets(expr, sizeof(expr), stdin);

    if (isBalanced(expr))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}