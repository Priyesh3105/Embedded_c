#include<stdio.h>
#include<stdlib.h>

//cercular link list delete at first, at end and ant index

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

struct node * deleteAtFirst(struct node *tail){
    
    struct node * temp = NULL;
    temp = tail->next;

    if (temp == tail)
    {
        temp = tail;
        free(tail);
        tail = NULL;
        return tail;
    }
    

    temp->next->prev = tail;
    tail->next = temp->next;
    free(temp);

    return tail;
}

struct node * deleteAtEnd(struct node *tail){
    
    struct node * temp = NULL;
    temp = tail->prev;

    if (temp == tail)
    {
        temp = tail;
        free(tail);
        tail = NULL;
        return tail;
    }
    

    temp->next = tail->next;
    tail->next->prev = temp;
    free(tail);
    tail = temp;

    return tail;
}

struct node * deleteAtPos(struct node *tail, int pos){
    struct node * temp = NULL;
    struct node * temp2 = NULL;
    temp = tail->next;
    while (pos>1)
    {
        temp = temp->next;
        pos--;
    }
    
    temp2 = temp->next;
    temp2->prev = temp->prev;
    temp->prev->next = temp2;
    free(temp);
    temp = NULL;
    return tail;

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

    printf("list before deletion:\n");
    traverseList(tail);

    tail = deleteAtPos(tail, 4);
    printf("list after delete at pos = 4 deletion:\n");
    traverseList(tail);

    tail = deleteAtFirst(tail);
    printf("list after delete at first deletion:\n");
    traverseList(tail);

    tail = deleteAtEnd(tail);
    printf("list after delete at end deletion:\n");
    traverseList(tail);
    return 0;
}