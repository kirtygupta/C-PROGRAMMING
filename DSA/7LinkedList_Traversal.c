// CREATION, LINKING AND TRAVERSAL IN LL
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

// ptr pointer used for traversal
void linkedListTraversal(struct node *ptr){
    while(ptr != NULL){
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } 
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //ALLOCATE MEMORY FOR NODES IN THE LINKED LIST IN HEAP 
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    fourth = (struct node *) malloc(sizeof(struct node));

    //LINK FIRST AND SECOND NODES
    head->data = 7;
    head->next = second;
    
    //LINK SECOND AND THIRD NODES
    second->data = 11;
    second->next = third;
    
    //LINK THIRD AND FOURTH NODES
    third->data = 66;
    third->next = fourth;

    //TERMINATE THE LIST AT THE FOURTH NODES
    fourth->data = 57;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}