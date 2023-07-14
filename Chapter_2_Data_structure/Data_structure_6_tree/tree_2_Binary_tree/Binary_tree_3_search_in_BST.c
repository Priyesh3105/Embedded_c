#include <stdio.h>
#include <stdlib.h>

/*-----------------search() in Binary Search tree-----------------*/

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

/*-----------------------search() function----------------------*/
void search(struct Node *root, int key)
{
    if (root == NULL)
    {
        printf("Element not found...\n");
    }
    else if (root->data == key)
    {
        printf("Found: %d", root->data);
    }
    else if (root->data > key)
    {
        search(root->left, key);
    }
    else if (root->data < key)
    {
        search(root->right, key);
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

    search(root, 6);

    return 0;
}