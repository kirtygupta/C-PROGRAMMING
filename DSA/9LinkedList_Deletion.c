// DELETION IN LL
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

// CASE 1: DELETING THE FIRST ELEMENT FROM THE LL
struct node *deleteAtFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// CASE 2: DELETING THE ELEMENT AT AN INDEX FROM THE LL
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    { // MOVING p and q
        p = p->next;
        q = q->next;
    }
    // when q comes at the index where element has to be deleted
    p->next = q->next;
    free(q);
    return head;
}

// CASE 3: DELETING THE LAST ELEMENT FROM THE LL
struct node *deleteAtEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

// CASE 4: DELETING THE FIRST OCCURANCE OF THE ELEMENT WITH A GIVEN VALUE FROM THE LL
struct node *deleteGivenValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while(q->data != value && q->next != NULL)
    { 
        p = p->next;
        q = q->next;
    }

    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    else{
        printf("Element not found !!\n");
    }
    
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // ALLOCATE MEMORY FOR NODES IN THE LINKED LIST IN HEAP
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // LINK FIRST AND SECOND NODES
    head->data = 4;
    head->next = second;

    // LINK SECOND AND THIRD NODES
    second->data = 3;
    second->next = third;

    // LINK THIRD AND FOURTH NODES
    third->data = 8;
    third->next = fourth;

    // TERMINATE THE LIST AT THE FOURTH NODES
    fourth->data = 1;
    fourth->next = NULL;

    printf("Original Linked List :\n");
    linkedListTraversal(head);
    printf("\n");

    /*
        head = deleteAtFirst(head);
        printf("Linked List After Deletion At First :\n");
        linkedListTraversal(head);
        printf("\n");
    */

    /*
        head = deleteAtIndex(head, 2);
        printf("Linked List After Deletion At An Index :\n");
        linkedListTraversal(head);
        printf("\n");
    */

/*
    head = deleteAtEnd(head);
    printf("Linked List After Deletion At The End :\n");
    linkedListTraversal(head);
    printf("\n");
*/

/**/
    head = deleteGivenValue(head, 3);
    printf("Linked List After Deleting The Given Value :\n");
    linkedListTraversal(head);
    printf("\n");


    return 0;
}