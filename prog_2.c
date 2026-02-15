#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
char peek() { return stack[top]; }

int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    int j = 0;
    for (int i = 0; infix[i] != '\0'; i++) {

        if (isalnum(infix[i]))
            postfix[j++] = infix[i];

        else if (infix[i] == '(')
            push(infix[i]);

        else if (infix[i] == ')') {
            while (peek() != '(')
                postfix[j++] = pop();
            pop();
        }

        else {
            while (top != -1 && precedence(peek()) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
    }

    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';
}

int evaluatePostfix(char postfix[]) {
    int st[MAX], top2 = -1;

    for (int i = 0; postfix[i]; i++) {
        if (isdigit(postfix[i]))
            st[++top2] = postfix[i] - '0';
        else {
            int val1 = st[top2--];
            int val2 = st[top2--];

            switch (postfix[i]) {
                case '+': st[++top2] = val2 + val1; break;
                case '-': st[++top2] = val2 - val1; break;
                case '*': st[++top2] = val2 * val1; break;
                case '/': st[++top2] = val2 / val1; break;
            }
        }
    }
    return st[top2];
}

int main() {
    char infix[100], postfix[100];

    printf("Enter infix expression (digits only): ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix: %s\n", postfix);
    printf("Result: %d\n", evaluatePostfix(postfix));

    return 0;
}