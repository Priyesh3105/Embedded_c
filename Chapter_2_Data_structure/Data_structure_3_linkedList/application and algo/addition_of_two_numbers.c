#include<stdio.h>
#include<stdlib.h>


//addition of two numbers

struct node{
    int data;
    struct node * next;
};

struct node * reverseList(struct node * head){
    if(head == NULL)
        return head;

    struct node * ptr = NULL;
    struct node * qtr = NULL;
    ptr = head->next;
    // Update the next pointer of the last node to NULL
    head->next = NULL;

    while (ptr != NULL)
    {
        qtr = ptr;
        ptr = ptr->next;
        qtr->next = head;
        head = qtr;
    }

    return head;
}

struct node * add_node(struct node * head, int data){
    struct node * newP = (struct node *)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = NULL;

    newP->next = head;
    head = newP;
    return head; 
}

struct node * create(struct node * head, int num){
    while (num != 0)
    {
        head = add_node(head, num % 10);
        num = num/10;
    }    
    return head;
}

struct node * push(struct node * head, int val){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
    return head;
}

struct node *add(struct node *head1, struct node *head2) {
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    struct node *ptr = head1;
    struct node *qtr = head2;
    struct node *head3 = NULL;
    int sum = 0, carry = 0;
    while (ptr || qtr) {
        sum += carry;
        if (ptr) {
            sum += ptr->data;
            ptr = ptr->next;
        }
        if (qtr) {
            sum += qtr->data;
            qtr = qtr->next;
        }
        carry = sum / 10;
        sum = sum % 10;

        head3 = add_node(head3, sum);

        sum = 0;
    }
    if (carry)
        head3 = add_node(head3, carry);
    return head3;
}

void back_to_num(struct node * head){
    struct node * temp = head;
    printf("\n result = ");
    while (temp)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    return;
}

void print(struct node * head){
    struct node * ptr = NULL;
    ptr = head;
    if (ptr == NULL)
    {
        printf("oops! there is no list.\n");
    }
    else
    {
        printf("here is the list: \n");
        while (ptr != NULL)
        {
            printf("element is: %d\n", ptr->data);
            ptr = ptr->next;
        }
    }    
}

int main(){
    
    int num1, num2 ;
    printf("enter the first number: ");
    scanf("%d", &num1);
    
    printf("enter the first number: ");
    scanf("%d", &num2);


    struct node * head1 = NULL;
    head1 = create(head1, num1);
    printf("\nfirst linked list:\n");
    print(head1);
    head1 = reverseList(head1);
    printf("\nfirst reversed linked list:\n");
    print(head1);

    struct node * head2 = NULL;
    head2 = create(head2, num2);
    printf("\nfirst linked list:\n");
    print(head2);
    head2 = reverseList(head2);
    printf("\nfirst reversed linked list:\n");
    print(head2);


    struct node * head3 = NULL;
    head3 = add(head1, head2);
    printf("\n addition of first and second");
    print(head3);

    back_to_num(head3);
    
    return 0;
}