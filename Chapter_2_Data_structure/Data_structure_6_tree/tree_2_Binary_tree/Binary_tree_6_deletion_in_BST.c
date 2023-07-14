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

/*-----------------------inorder1 traversal----------------------*/
void inOrder(struct Node * root){
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
       
}


/*-----------------------inOrderPredecessor(root) function----------------------*/
struct Node * inOrderPredecessor(struct Node * root){
    root = root->left;
    while (root->right != NULL)
    {
       root = root->right;
    }
    return root;
}


/*-----------------------deleteNode() function----------------------*/
struct Node * deleteNode(struct Node * root, int val){
    struct Node * ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    
    //search for the node
    if(val < root->data){
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = deleteNode(root->right, val);
    }
    //free the predicicer of node
    else
    {
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left, ipre->data);
    }
    return root;    
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

    inOrder(root);
    root = deleteNode(root , 11);
    printf("\n");
    inOrder(root);

    return 0;
}