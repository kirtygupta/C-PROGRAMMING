#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

//To Print
void linkedListTraversal(struct node * ptr){
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } 
}

int isEmpty(struct node * top){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct node * top){
    struct node * n = (struct node *)malloc(sizeof(struct node));   
    if(n == NULL){     // IF NOT ABLE TO ALLOCATE MEMORY DYNAMICALLY
        return 1;
    }else{
        return 0;
    }
}

struct node * push(struct node * top, int val){
    if(isFull(top)){
        printf("Stack Overflow!\n");
    }
    else{
        struct node * n = (struct node *)malloc(sizeof(struct node)); 
        n->data = val;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node ** top){  //here **top is pointer to pointer becoz &top is passed
    if(isEmpty(*top)){
        printf("Stack UnderFlow\n");
    }
    else{
        struct node * n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}


int main(){
    struct node * top = NULL;    //top is pointing to NULL -> LL IS EMPTY
    top = push(top, 5);    
    top = push(top, 4);    
    top = push(top, 3);    
    top = push(top, 2);    
    linkedListTraversal(top);
    printf("\n");

    int element = pop(&top);  //address is passed to update the changes in the top and then print
    //OR MAKE top AS GLOBAL VARIABLE IN PLACE OF USING &top 
    printf("Popped element is %d.\n",element);
    linkedListTraversal(top);
    return 0;
}