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

void inOrderTraversal(struct node * root){
    if(root != NULL){
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

//inOrderPredecessor- LEFT SUB-TREE KA RIGHT MOST CHILD
struct node * inOrderPredecessor(struct node * root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    //NULL ho gaya:
    return root;  //Leaf node
}

struct node * deleteNode(struct node * root, int value){
    struct node * iPre;
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root); //LEAF NODE
        return NULL;
    }

    //SEARCH FOR THE NODE TO BE DELETED
    if(value < root->data){
        root->left = deleteNode(root->left, value);
    }
    else if(value > root->data){
        root->right = deleteNode(root->right, value);
    }

    //DELETION STRATEGY WHEN THE NODE IS FOUND
    else{
        iPre = inOrderPredecessor(root); // value of left
        root->data = iPre->data;  //kept inOrderPredecessor value at place where deletion will take place
        root->left = deleteNode(root->left, iPre->data);  //deleted inOrderPredecessor value (original place of inOrderPredecessor)
    } 
    return root;  
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

    printf("InOrder Traversal : ");
    inOrderTraversal(p);
    printf("\n");
    printf("|Root Data is %d|\n", p->data);
    deleteNode(p,5);
    printf("InOrder Traversal After Deletion: ");
    inOrderTraversal(p);
    printf("\n");
    printf("|Root Data is %d|\n", p->data);

    return 0;
}