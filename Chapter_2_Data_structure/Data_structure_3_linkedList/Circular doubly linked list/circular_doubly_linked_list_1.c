#include<stdio.h>
#include<stdlib.h>

//cercular link list

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

    printf("the list :\n");
    traverseList(tail);
    return 0;
}