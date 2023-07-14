#include <stdio.h>
#include <stdlib.h>

/*-----------------linked representation of simple tree-----------------*/
/*-----------------------and it's preorder traversal----------------------*/
/*-----------------------and it's postorder traversal----------------------*/
/*-----------------------and it's inorder traversal----------------------*/
struct Tree
{
    int data;
    struct Tree * child_1;
    struct Tree * child_2;
    struct Tree * child_3;
};

/*-----------------------create node----------------------*/

struct Tree * createNode(int data){
    struct Tree * new;
    new = (struct Tree *)malloc(sizeof(struct Tree));
    new->data = data;
    new->child_1 = NULL;
    new->child_2 = NULL;
    new->child_3 = NULL;
}


/*-----------------------preorder traversal----------------------*/
void preOrder(struct Tree * root){
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->child_1);
        preOrder(root->child_2);
        preOrder(root->child_3);
    }
       
}

/*-----------------------postorder traversal----------------------*/
void postOrder(struct Tree * root){
    if (root != NULL)
    {
        postOrder(root->child_1);
        postOrder(root->child_2);
        postOrder(root->child_3);
        printf("%d ", root->data);
    }
       
}

/*-----------------------inorder1 traversal----------------------*/
void inOrder1(struct Tree * root){
    if (root != NULL)
    {
        inOrder1(root->child_1);
        printf("%d ", root->data);
        inOrder1(root->child_2);
        inOrder1(root->child_3);
    }
       
}

/*-----------------------inorder2 traversal----------------------*/
void inOrder2(struct Tree * root){
    if (root != NULL)
    {
        inOrder2(root->child_1);
        inOrder2(root->child_2);
        printf("%d ", root->data);
        inOrder2(root->child_3);
    }
       
}

int main(){
    //initialization
    struct Tree * root = NULL;
    struct Tree * a = NULL;
    struct Tree * b = NULL;
    struct Tree * c = NULL;
    struct Tree * d = NULL;
    struct Tree * e = NULL;
    struct Tree * f = NULL;

    //memory allocation
    root = createNode(11);
    a = createNode(7);
    b = createNode(5);
    c = createNode(9);
    d = createNode(1);
    e = createNode(2);
    f = createNode(3);

    /*            root(11)
                 /   |   \                     
             a(7)   b(5)  c(9)
                    / \    \
                 d(1)  e(2)   f(3)   
    
    */

    //root with its child
    root->child_1 = a;
    root->child_2 = b;
    root->child_3 = c;

    //node b
    b->child_1 = d;
    b->child_2 = e;

    //node c
    c->child_1 = f;

    //preorder traversal
    printf("Preorder traversal: ");
    preOrder(root);

    //postorder traversal
    printf("\nPostorder traversal: ");
    postOrder(root);

    //postorder traversal
    printf("\ninOrder1 traversal: ");
    inOrder1(root);

    //postorder traversal
    printf("\ninOrder2 traversal: ");
    inOrder2(root);
    return 0;
}