#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

//TRAVERSAL
void linkedListTraversal(struct node *head){
    struct node *ptr = head;

    do{
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

//INSERTION AT FIRST
struct node *insertAtFirst(struct node *head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node)); //new node
    ptr->data = data;

    struct node *p = head->next;
    while(p->next != head){
        p = p->next;
    }

    //At this point p points to the last node of this circular linked list
    ptr->next = head;
    p->next = ptr;
    head = ptr;

    return head;
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
    
    //LINK SECOND AND THIRD NODES
    second->data = 3;
    second->next = third;
    
    //LINK THIRD AND FOURTH NODES
    third->data = 6;
    third->next = fourth;

    //TERMINATE THE LIST AT THE FOURTH NODES
    fourth->data = 1;
    fourth->next = head;

    printf("Original Circular Linked List :\n");
    linkedListTraversal(head);
    printf("\n");

    printf("Circular Linked List After Insertion :\n");
    head = insertAtFirst(head, 80);
    linkedListTraversal(head);
    printf("\n");

    return 0;
}