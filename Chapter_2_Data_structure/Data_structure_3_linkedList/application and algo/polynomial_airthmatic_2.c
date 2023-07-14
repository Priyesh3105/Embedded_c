#include<stdio.h>
#include<stdlib.h>

/*--------multiplication of two polynomials------*/

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

//adjust the exponent and coefficient

void adjust(struct node *head3) {
    struct node *ptr = head3;
    struct node *temp = NULL;

    while (ptr != NULL && ptr->next != NULL) {
        if (ptr->exponent == ptr->next->exponent) {
            ptr->coefficient = ptr->coefficient + ptr->next->coefficient;
            temp = ptr->next;
            ptr->next = ptr->next->next;
            free(temp);
        } else {
            ptr = ptr->next;
        }
    }
    
    printf("List after adjustment: ");
    print(head3);
}


void polyMull(struct node * head1, struct node * head2){
    struct node * ptr1 = head1;
    struct node * ptr2 = head2;
    struct node * head3 = NULL;
    int res1 = 0, res2 = 0;
    
    while (ptr1 != NULL)
    {
        while (ptr2 != NULL)
        {
            res1 = ptr1->coefficient * ptr2->coefficient;
            res2 = ptr1->exponent + ptr2->exponent;
            head3 = insert(head3, res1, res2);
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
        ptr2 = head2;        
    }    

    printf("the multiplication of polly is: ");
    print(head3);
    printf("\n\n");
    adjust(head3);    
}



int main(){
    struct node * head1 = NULL;
    struct node * head2 = NULL;
    printf("enter the polynomial: ");
    head1 = create(head1);
    printf("enter the polynomial: ");
    head2 = create(head2);
    polyMull(head1, head2);
    print(head1);
    print(head2);
    return 0;
}