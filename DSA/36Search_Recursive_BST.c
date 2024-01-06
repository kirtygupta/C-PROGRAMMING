//RECURSIVE SEARCHING IN BST
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

struct node * search(struct node * root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key == root->data){
        return root;
    }
    else if(key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

int main(){
    //CONSTRUCTING THE ROOT NODE:---> USING FUNCTION (RECOMMENDED)
    struct node * p = createNode(5);              /*      5     */
    struct node * p1 = createNode(3);             /*     / \    */
    struct node * p2 = createNode(6);             /*    3   6   */
    struct node * p3 = createNode(1);             /*   / \      */
    struct node * p4 = createNode(4);             /*  1   4     */

    //LINKING THE ROOT NODE WITH LEFT AND RIGHT CHILDREN
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct node * s = search(p, 6); //will give a pointer to the node with the value

    if(s != NULL){
        printf("Found : %d\n",s->data);
    }
    else{
        printf("Element not found.\n");
    }

    return 0;
}