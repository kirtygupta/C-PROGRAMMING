#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node * createNode(int data){
    struct node * n;    //CREATING A NODE POINTER
    n = (struct node *)malloc(sizeof(struct node)); //ALLOCATING MEMORY IN THE HEAP
    n->data = data; //SETTING THE DATA
    n->left = NULL; //SETTING THE LEFT CHILD TO NULL
    n->right = NULL;    //SETTING THE RIGHT CHILD TO NULL
    return n;   //FINALLY RETURNING THE CREATED NODE
}

void preOrderTraversal(struct node * root){
    if(root != NULL){
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct node * root){
    if(root != NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main(){
    //CONSTRUCTING THE ROOT NODE:---> USING FUNCTION (RECOMMENDED)
    struct node * p = createNode(4);              /*      4     */
    struct node * p1 = createNode(1);             /*     / \    */
    struct node * p2 = createNode(6);             /*    1   6   */
    struct node * p3 = createNode(5);             /*   / \      */
    struct node * p4 = createNode(2);             /*  5   2     */

    //LINKING THE ROOT NODE WITH LEFT AND RIGHT CHILDREN
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("PreOrder Traversal : ");
    preOrderTraversal(p);
    printf("\n");

    printf("PostOrder Traversal : ");
    postOrderTraversal(p);
    printf("\n");

    return 0;
}