#include<stdio.h>
#include<stdlib.h>

//cercular link list add at position & add at start

struct node
{
    struct node *prev;
    int data;
    struct node *next;
    
};

void traverseList(struct node * tail){
    struct node * temp = NULL;
    temp = tail->next;


    do
    {
        printf("element: %d\n", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    
}

struct node * addToEmpty(int data){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    temp->prev = temp;
    return temp;
}

struct node * addAtStart(struct node *tail, int data){
    struct node * newP = addToEmpty(data);
    if (tail == NULL)
    {
        return newP;
    }
    else
    {
        struct node * temp = NULL;
        temp = tail->next;

        newP->next = temp;
        newP->prev = tail;
        tail->next = newP;
        temp->prev = newP;

        return tail;
    }
}

struct node * addToEnd(struct node *tail, int data){
    struct node * newP = addToEmpty(data);
    if (tail == NULL)
    {
        return newP;
    }
    else
    {
        struct node * temp = NULL;
        temp = tail->next;

        newP->next = temp;
        newP->prev = tail;
        tail->next = newP;
        temp->prev = newP;
        
        tail =newP;
        return tail;
    }
}
struct node * addAtPos(struct node *tail, int data, int pos){
    struct node * newP = addToEmpty(data);
    if (tail == NULL)
    {
        return newP;
    }
    else
    {
        struct node * temp = NULL;
        temp = tail->next;
        while (pos>1)
        {
            temp = temp->next;
            pos--;
        }
        
        newP->next = temp->next;
        temp->next = newP;
        temp->next->prev = newP;
        return tail;
    }
}


int main(){
    int n;
    struct node * tail = NULL;
    printf("enter the number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        
        if(i == 0){
           tail = addToEmpty(i+n+3) ;
        }
        else{
            tail = addToEnd(tail, i+n-3);
        }
    }

    printf("list before insertion:\n");
    traverseList(tail);

    tail = addAtStart(tail, 888);
    printf("list after add at start insertion:\n");
    traverseList(tail);

    tail = addAtPos(tail, 999, 3);
    printf("list after insertion:\n");
    traverseList(tail);
    return 0;
}