#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr){
    if (ptr == NULL)
        printf("Linked list is empty.\n");
        
    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }    
}

struct node *addToEmpty(int data){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp; // Return the created node
}

struct node *addToEnd(struct node *head, int data){
    struct node *temp = addToEmpty(data);
    struct node *ptr = head;
    
    if (head == NULL)
        return temp;
    
    while (ptr->next != NULL){
        ptr = ptr->next;
    }
    
    ptr->next = temp;
    return head;
}

void swap(struct node* a, struct node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubbleSort(struct node* head) {
    if (head == NULL || head->next == NULL)
        return;

    int swapped;
    struct node* ptr1;
    struct node* lptr = NULL;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

int main(){
    int n;
    struct node *head = NULL;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        if (i == 0){
            head = addToEmpty(n + 3);
        }
        else{
            head = addToEnd(head, i + n - 3);
        }
    }
    
    printf("Linked list:\n");
    linkedListTraversal(head);
    
    bubbleSort(head);

    printf("Sorted Linked list:\n");
    linkedListTraversal(head);

    return 0;
}
