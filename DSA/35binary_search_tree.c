//Checking if a binary tree is a binary search tree or not!
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

//SIMILAR TO INORDER TRAVERSAL---> IN A BST GIVES IN ASCENDING ORDER
int isBST(struct node * root){
    //WILL GIVE SAME VALUE FOR EVERY CALL
    static struct node * prev = NULL;    //PREV--> VOH NODE JISKE CHILDREN KO HAM CHECK KARRE H

    if(root != NULL){
        if(!isBST(root->left)){
            return 0;  // NOT A BST
        }//ROOT DATA KO BADA HONA CHAIYE PREVIOUS DATA SE
        if(prev != NULL && root->data <= prev->data){ //TO MAKE SURE NEXT ELEMENT IS ALWAYS GREATER THAN THE PREVIOUS ONE
            return 0; // NOT A BST
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;   // EMPTY TREE STILL CONSIDERED BST
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

    printf("InOrder Traversal : ");
    inOrderTraversal(p);
    printf("\n");
    
    if(isBST((p))){
        printf("This is a BST.\n");
    }else{
        printf("This is not a BST.\n");
    }

    return 0;
}