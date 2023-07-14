#include<stdio.h>
#include<stdlib.h>

/*--------addition of two polynomials------*/

struct node{
    float coefficient;
    int exponent;
    struct node * next;
};

struct node * insert(struct node * head, float co, int ex){
    struct node * temp = NULL;
    struct node * newP = (struct node *)malloc(sizeof(struct node));
    newP->coefficient = co;
    newP->exponent = ex;
    newP->next = NULL;
    if(head == NULL || ex > head->exponent){
        newP->next = head;
        head = newP;
    }
    else{
        temp = head;
        while (temp->next != NULL && temp->next->exponent > ex)
        {
            temp = temp->next;
        }
        newP->next = temp->next;
        temp->next = newP;        
    }
    return head;
}

struct node * create(struct node * head){
    int n;
    int i;
    float coeff;
    int expo;

    printf("enter the number of the terms: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("enter the coefficient for term %d:", i+1);
        scanf("%f", &coeff);
        printf("enter the exponent for term %d:", i+1);
        scanf("%d", &expo);
        head = insert(head, coeff, expo);
    }  
    return head; 
}

void print(struct node * head){
    if(head == NULL){
        printf("OOPs No Pollynomial !\n");
    }
    else
    {
        struct node * temp = NULL;
        temp = head;
        while (temp != NULL)
        {
            printf("(%f x^%d)", temp->coefficient, temp->exponent);
            temp = temp->next;
            if(temp!=NULL){
                printf(" + ");
            }
            else
            {
                printf("\n");
            }
        }    
    }
}

void polyAdd(struct node * head1, struct node * head2){
    struct node * ptr1 = head1;
    struct node * ptr2 = head2;
    struct node * head3 = NULL;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->exponent == ptr2->exponent){
            head3 = insert(head3, ptr1->coefficient + ptr2->coefficient, ptr1->exponent);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if (ptr1->exponent > ptr2->exponent)
        {
            head3 = insert(head3, ptr1->coefficient, ptr1->exponent);
            ptr1 = ptr1->next;
        }
        else if (ptr1->exponent < ptr2->exponent)
        {
            head3 = insert(head3, ptr2->coefficient, ptr2->exponent);
            ptr2 = ptr2->next;
        }
              
    }
    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr1->coefficient, ptr1->exponent);
        ptr1 = ptr1->next;
    }
    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr2->coefficient, ptr2->exponent);
        ptr2 = ptr2->next;
    }
    printf("the addition of polly is: ");
    print(head3);
    
}

int main(){
    struct node * head1 = NULL;
    struct node * head2 = NULL;
    printf("enter the polynomial: ");
    head1 = create(head1);
    printf("enter the polynomial: ");
    head2 = create(head2);
    polyAdd(head1, head2);
    print(head1);
    print(head2);
    return 0;
}