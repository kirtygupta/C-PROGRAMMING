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

void insert(struct node * root, int key){
    struct node * prev = NULL;  //  PREVIOUS POINTER(behind root)
    while (root != NULL)
    {
        prev = root;
        if(key == root->data){
            printf("Cannot Insert %d as already in BST.\n", key);
            return;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node * new = createNode(key); 
    //LINKING THE NEWLY INSERTED NODE 
    if(key < prev->data){
        prev->left = new;
    }  
    else{
        prev->right = new;
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

    insert(p, 7);
    //insert(p, 6);
    printf("%d", p->right->right->data);

    return 0;
}