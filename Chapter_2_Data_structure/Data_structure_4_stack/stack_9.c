#include <stdio.h>
#include <stdlib.h>

/*--------palindrome check using stack (in anaXana form)---------*/

struct node {
    int data;
    struct node* next;
} *top = NULL;

/*---------isEmpty()-----------*/
int isEmpty() {
    if (top == NULL)
        return 1;
    else
        return 0;
}

/*---------push()---------*/

void push(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("stack overflow...\n");
        return;  // Return without exiting the program
    }

    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

/*---------pop()---------*/

int pop() {
    struct node* temp;
    int poppedData;
    temp = top;
    if (isEmpty()) {
        printf("stack underflow...");
        return -1;  // Return an error value (e.g., -1) to indicate underflow
    }
    top = temp->next;
    poppedData = temp->data;
    free(temp);
    temp = NULL;
    return poppedData;
}

/*---------palindrome_check()---------*/
void palindrome_check(char* s) {
    int i = 0;
    while (s[i] != 'X') {
        push(s[i]);
        i++;
    }
    i++;
    while (s[i]) {
        if (isEmpty() || s[i] != pop()) {
            printf("Not a palindrome...");
            return;  // Return without exiting the program
        }
        i++;
    }
    if (isEmpty())
        printf("Palindrome");
    else
        printf("Not a palindrome...");
}

int main() {
    char s[100];
    printf("enter the string: ");
    scanf("%s", s);

    palindrome_check(s);
    return 0;
}
