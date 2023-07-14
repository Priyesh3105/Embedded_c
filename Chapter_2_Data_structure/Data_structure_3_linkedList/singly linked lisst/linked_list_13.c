#include <stdio.h>
#include <stdlib.h>

//add at begining

struct node {
    int data;
    struct node* link;
};

void print_data(struct node* head) {
    if (head == NULL)
        printf("linked list is empty!\n");

    struct node* ptr = head;
    while (ptr != NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->link;
    }
}

struct node* add_beg(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = head;
    return ptr;
}

int main() {
    struct node* head = NULL;

    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        head = add_beg(head, i);
    }

    print_data(head);

    return 0;
}
