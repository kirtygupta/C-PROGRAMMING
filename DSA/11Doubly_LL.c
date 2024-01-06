#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;
};

//TRAVERSAL
void doublyLinkedListTraversal(struct node *head){
    struct node *ptr = head;
    printf("Forward Traversal :\n");
    do{
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }while(ptr != NULL);

    printf("\n");

    ptr = head;   // Reset ptr to the tail of the list
    printf("\nBackward Traversal :\n");
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    do{
        printf("%d\t", ptr->data);
        ptr = ptr->prev;
    }while(ptr != NULL);
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
    head->data = 4;
    head->next = second;
    head->prev = NULL;

    //LINK SECOND AND THIRD NODES
    second->data = 3;
    second->next = third;
    second->prev = head;
    
    //LINK THIRD AND FOURTH NODES
    third->data = 6;
    third->next = fourth;
    third->prev = second;

    //TERMINATE THE LIST AT THE FOURTH NODES
    fourth->data = 1;
    fourth->next = NULL;
    fourth->prev = third;

    printf("Original Doubly Linked List :\n");
    doublyLinkedListTraversal(head);
    printf("\n");

    return 0;
}