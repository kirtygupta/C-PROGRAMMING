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

int main(){
    //CONSTRUCTING THE ROOT NODE:---> USING FUNCTION (RECOMMENDED)
    struct node * p = createNode(2);
    struct node * p1 = createNode(1);
    struct node * p2 = createNode(4);

    //LINKING THE ROOT NODE WITH LEFT AND RIGHT CHILDREN
    p->left = p1;
    p->right = p2;


    /*TO AVOID REPETITION LIKE THIS CREATE A FUNCTION OF CREATION :
    struct node * p;    //POINTER TO THE STRUCTURE
    p = (struct node *)malloc(sizeof(struct node)); //ROOT NODE
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    struct node * p1;    //POINTER TO THE STRUCTURE
    p1 = (struct node *)malloc(sizeof(struct node)); //2nd NODE
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    struct node * p2;    //POINTER TO THE STRUCTURE
    p2 = (struct node *)malloc(sizeof(struct node)); //3rd NODE
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    //LINKING THE ROOT NODE WITH LEFT AND RIGHT CHILDREN
    p->left = p1;
    p->right = p2;
    */

    return 0;
}