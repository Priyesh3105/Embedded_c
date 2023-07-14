#include <stdio.h>
#include <stdlib.h>

/*-----------------linked representation of Binary tree-----------------*/
/*-----------------------and it's preorder traversal----------------------*/
/*-----------------------and it's postorder traversal----------------------*/
/*-----------------------and it's inorder traversal----------------------*/
struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};

/*-----------------------create node----------------------*/

struct Node * createNode(int data){
    struct Node * new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
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

/*-----------------------postorder traversal----------------------*/
void postOrder(struct Node * root){
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
       
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



int main(){
    //initialization
    struct Node * r = NULL;
    struct Node * a = NULL;
    struct Node * b = NULL;
    struct Node * c = NULL;
    struct Node * d = NULL;
    struct Node * e = NULL;
    struct Node * f = NULL;

    //memory allocation
    r = createNode(11);
    a = createNode(7);
    b = createNode(5);
    c = createNode(9);
    d = createNode(1);
    e = createNode(2);
    f = createNode(3);

    /*            root(11)
                 /     \                     
              a(7)      b(5)  
              /  \      /   \
           c(9)   d(1) e(2)  f(3)   
    
    */

    //root with its child
    r->left = a;
    r->right = b;

    //node b
    a->left = c;
    a->right = d;

    //node b
    b->left = e;
    b->right = f;

    //preorder traversal
    printf("Preorder traversal: ");
    preOrder(r);

    //postorder traversal
    printf("\nPostorder traversal: ");
    postOrder(r);

    //postorder traversal
    printf("\ninOrder traversal: ");
    inOrder(r);

    return 0;
}