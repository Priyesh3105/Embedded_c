#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr) {
    if (ptr == NULL)
        printf("Linked list is empty!\n\n");

    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertAtEnd(struct Node* head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL) {
        // If the linked list is empty, make the new node the head
        head = ptr;
    } else {
        struct Node *p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = ptr;
    }

    return head;   
}


int main() {
    int n;
    printf("Enter the length of the linked list: ");
    scanf("%d", &n);

    struct Node* head = NULL;

    printf("\nLinked list before insertion:\n");
    linkedListTraversal(head);

    for (int i = 0; i < n; i++) {
        int num;
        printf("Enter the element: ");
        scanf("%d", &num);
        head = insertAtEnd(head, num);
    }

    printf("\nLinked list after insertion:\n");
    linkedListTraversal(head);

    return 0;
}
