#include<stdio.h>
#include<stdlib.h>

struct node
{
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
    } while (temp != tail);
    
}

struct node * addToEmpty(int data){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct node * addToEnd(struct node *tail, int data){
    struct node * newP = addToEmpty(data);

    newP ->next = tail->next;
    tail->next = newP ;
    tail = tail ->next;
    return tail;
}

int searchElem(struct node *tail, int element){
    struct node * temp = NULL;
    int index = 0;

    if(tail == NULL){
        return -2;
    }

    temp = tail->next;
    do
    {
        if(temp->data == element){
            return index;
        }
        temp = temp->next;
        index++;
    } while (temp != tail);
    return -1;
}



int main(){
    int n;
    struct node * tail = NULL;
    printf("enter the number: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        
        if(i == 0){
           tail = addToEmpty(i+n+3) ;
        }
        else{
            tail = addToEnd(tail,  2*(i*i)+(5*(n-3))-6);
        }
    }

    printf("the list :\n");
    traverseList(tail);
    int num = searchElem(tail , 5*(n-3));
    printf("the index of element %d is %d", 5*(n-3), num);
    return 0;
}