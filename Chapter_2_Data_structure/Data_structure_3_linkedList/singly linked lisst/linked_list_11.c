#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    if (ptr == NULL)
        printf("linked list is empty!\n\n");
        
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }    
}

struct Node* insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

int main(){
    int n;
    printf("enter the length of the linked list: ");
    scanf("%d", &n);

    struct Node *head = NULL;

    printf("\n\nlinked list before insertion\n");
    linkedListTraversal(head);

    for(int i =0; i<n; i++){
        int num;
        printf("enter the element: ");
        scanf("%d", &num);
        head = insertAtFirst(head, num);
    }

    
    printf("\n\nlinked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}