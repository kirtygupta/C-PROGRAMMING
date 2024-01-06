#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * top = NULL;    //top is now a GLOBAL VARIABLE

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

int pop(struct node * tp){  //HERE tp is taken in place of top becoz top is a global variable and cannot be used as local variable
    if(isEmpty(tp)){
        printf("Stack UnderFlow\n");
    }
    else{
        struct node * n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(int pos){   
    struct node * ptr = top;    //ptr is used for traversal here
    for (int i = 0; (i < pos-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr != NULL){
        return ptr->data;
    }else{
        return -1;
    }
}

int main(){
    
    top = push(top, 11);    
    top = push(top, 12);    
    top = push(top, 13);    
    top = push(top, 14);    
    top = push(top, 15);    
    linkedListTraversal(top);
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Value at position %d is : %d\n",i, peek(i));
    }
    
    
    return 0;
}