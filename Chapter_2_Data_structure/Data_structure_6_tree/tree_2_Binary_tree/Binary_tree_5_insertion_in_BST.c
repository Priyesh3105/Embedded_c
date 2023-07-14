#include <stdio.h>
#include <stdlib.h>

/*-----------------insert() in Binary Search tree-----------------*/

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

/*-----------------------create node----------------------*/

struct Node *createNode(int data)
{
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}



/*-----------------------itr_search() function----------------------*/
void itr_search(struct Node *root, int key)
{

    while (root != NULL)
    {
        if (root->data == key)
        {
            printf("Found: %d", root->data);
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else if (root->data < key)
        {
           root = root->right;
        }
    }

    if (root == NULL)
    {
        printf("Element not found...\n");
    }
}

/*-----------------------insert() function----------------------*/
void insert(struct Node *root, int key)
{
    struct Node * prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("element already exists...\n");
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else if (root->data < key)
        {
           root = root->right;
        }
    }
    struct Node * new = createNode(key);
    if(key < prev->data){
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }        
}

int main()
{
    // initialization
    struct Node *root = NULL;
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    struct Node *d = NULL;
    struct Node *e = NULL;
    struct Node *f = NULL;

    // memory allocation
    root = createNode(7);
    a = createNode(5);
    b = createNode(9);
    c = createNode(3);
    d = createNode(6);
    e = createNode(8);
    f = createNode(11);

    /*            root(7)
                 /     \
              a(5)      b(9)
              /  \      /   \
           c(3)   d(6) e(8)  f(11)

    */

    // root with its child
    root->left = a;
    root->right = b;

    // node b
    a->left = c;
    a->right = d;

    // node b
    b->left = e;
    b->right = f;

    insert(root, 11);
    itr_search(root, 11);

    return 0;
}