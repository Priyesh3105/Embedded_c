#include <stdio.h>
#include <stdlib.h>

/*-----------------linked representation of Binary Search tree-----------------*/
/*----------------------------and isBST() function----------------------------*/
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


/*-----------------------isBST() function----------------------*/
int isBST(struct  Node* root){
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}




int main(){
    //initialization
    struct Node * root = NULL;
    struct Node * a = NULL;
    struct Node * b = NULL;
    struct Node * c = NULL;
    struct Node * d = NULL;
    struct Node * e = NULL;
    struct Node * f = NULL;

    //memory allocation
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

    //root with its child
    root->left = a;
    root->right = b;

    //node b
    a->left = c;
    a->right = d;

    //node b
    b->left = e;
    b->right = f;

    //preorder traversal
    printf("Preorder traversal: ");
    preOrder(root);

    //postorder traversal
    printf("\nPostorder traversal: ");
    postOrder(root);

    //postorder traversal
    printf("\ninOrder traversal: ");
    inOrder(root);

    if (isBST(root))
    {
        printf("\nyes BST");
    }
    else
    {
        printf("\nno BST");
    }
    
    

    return 0;
}