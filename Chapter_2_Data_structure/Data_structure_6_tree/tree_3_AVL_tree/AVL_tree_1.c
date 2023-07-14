#include <stdio.h>
#include <stdlib.h>



struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};

int max(int a, int b){
    return a>b?a:b;
}

int getHeight(struct Node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

struct Node *createNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}

int getBalanceFactor(struct Node *n)
{
    if (n == NULL)
        return 0;

    return getHeight(n->left) - getHeight(n->right);
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right) , getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right) , getHeight(x->left)) + 1;

    return x;
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right) , getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right) , getHeight(x->left)) + 1;

    return y;
}

struct Node *insert(struct Node *node, int key)
{
    if (node == NULL)
        return createNode(key);

    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    return node;

    int bf = getBalanceFactor(node);

    // left left insertion
    if (bf > 1 && key < node->left->data)
    {
        rightRotate(node);
    }
    // right right insertion
    if (bf < -1 && key > node->right->data)
    {
        leftRotate(node);
    }
    // left right insertion
    if (bf > 1 && key > node->left->data)
    {
        node->left = leftRotate(node->left);
        rightRotate(node);
    }
    // right left insertion
    if (bf < -1 && key < node->right->data)
    {
        node->right = leftRotate(node->right);
        leftRotate(node);
    }
    return node;
}

/*-----------------------preorder traversal----------------------*/
void preOrder(struct Node* root){
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }  
}

/*-----------------------preorder traversal----------------------*/
void postOrder(struct Node* root){
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }  
}

/*-----------------------preorder traversal----------------------*/
void inOrder(struct Node* root){
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }  
}

int main(){
    struct Node * root = NULL;
    
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 8);
    root = insert(root, 9);
    root = insert(root, 11);
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    inOrder(root);
    return 0;
}
