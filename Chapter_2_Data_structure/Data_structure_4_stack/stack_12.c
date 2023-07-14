#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100

int stack[MAX];
char infix[MAX];
char postfix[MAX];
int top = -1;

int isEmpty();
void push(int val);
char pop();
void print();
void infix_to_postfix();
int space(char);
int precedence(char symbol);
int post_eval();

int main() {
    int result;
    printf("Enter the infix expression: ");
    fgets(infix, sizeof(infix), stdin);

    infix_to_postfix();
    print();

    result = post_eval();
    printf("the result is %d", result);
    return 0;
}

int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int val) {
    if (top == MAX - 1) {  // Fixed the condition to check if stack is full
        printf("Stack overflow...\n");
        exit(1);
    }
    top++;
    stack[top] = val;
}

char pop() {
    int val;
    if (isEmpty()) {
        printf("Stack underflow...\n");
        exit(1);
    }
    val = stack[top];
    top--;
    return val;
}

void print() {
    int i = 0;
    printf("The equivalent postfix expression: ");
    while (postfix[i]) {
        printf("%c", postfix[i++]);
    }
    printf("\n");
}

void infix_to_postfix() {
    int i, j = 0;
    char symbol;
    char next;
    for (i = 0; i < strlen(infix); i++) {
        symbol = infix[i];

        if (!space(symbol)){

            switch (symbol) {
                case '(':
                    push(symbol);
                    break;
                case ')':
                    while ((next = pop()) != '(') {
                        postfix[j++] = next;
                    }
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while (!isEmpty() && precedence(stack[top]) >= precedence(symbol))
                        postfix[j++] = pop();
                    push(symbol);
                    break;
                default:
                    postfix[j++] = symbol;
            }
            }
    }
    while (!isEmpty())
        postfix[j++] = pop();
    postfix[j] = '\0';
}

int space(char c) {
    if (c == ' ' || c == '\n' || c == '\t')
        return 1;
    else
        return 0;
}

int precedence(char symbol) {
    switch (symbol) {
        case '^':
            return 3;
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int post_eval(){
    int i;
    int a, b;
    for(i=0; i<strlen(postfix); i++){
        if(postfix[i] >= '0' && postfix[i] <= '9'){
            push(postfix[i] - '0');
        }
        else{
            a = pop();
            b = pop();
            switch (postfix[i])
            {
            case '+':
                push(b+a);
                break;
            case '-':
                push(b-a);
                break;
            case '*':
                push(b*a);
                break;
            case '/':
                push(b/a);
                break;
            case '^':
                push(pow(b,a));
                break;
            }
        }
    }
    return pop();
}