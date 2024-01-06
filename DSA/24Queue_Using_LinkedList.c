#include<stdio.h>
#include<stdlib.h>

struct node * f = NULL;
struct node * r = NULL;

struct node{
    int data; 
    struct node * next; 
};

void linkedListTraversal(struct node *ptr){
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } 
}

void enqueue(int val){
    struct node * n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL){
        printf("Queue is Full.\n");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f == NULL){
            f = r = n;
        }
        else{
            r->next = n;
            r = n;
        }
    }
}

int dequeue(){
    int val = -1;
    struct node * ptr = f;
    if(f == NULL){
        printf("Queue is Empty.\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main(){
    linkedListTraversal(f);
    printf("Deleted element is : %d\n", dequeue());
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    linkedListTraversal(f);
    printf("\n");
    printf("Deleted element is : %d\n", dequeue());
    printf("Deleted element is : %d\n", dequeue());
    printf("Deleted element is : %d\n", dequeue());
    printf("Deleted element is : %d\n", dequeue());
    linkedListTraversal(f);
    printf("\n");

    return 0;
}