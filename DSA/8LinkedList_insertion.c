// INSERTION IN LL
#include<stdio.h>
#include<stdlib.h>

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

//CASE 1: INSERT AT BEGINNING
//ptr is a new node
struct node *insertAtFirst(struct node *head, int data){  //new head
    struct node *ptr = (struct node *)malloc(sizeof(struct node));  //new node requested from heap
    ptr->data = data;
    ptr->next = head; 
    return ptr;
}

//CASE 2: INSERT AT INDEX
struct node *insertAtIndex(struct node *head, int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));  //new node requested from heap
    struct node *p = head;    // p is used for traversal and reaching index
    
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next; // here ptr is joined to next node
    p->next = ptr; //p is joined with ptr

    return head;
}

//CASE 3: INSERT AT END
struct node *insertAtEnd(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));  //new node requested from heap
    struct node *p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL; 
    return head;
}

//CASE 4: INSERT AFTER NODE
struct node *insertAfterNode(struct node *head, struct node *prevnode, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));  //new node requested from heap
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next=ptr;

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

    printf("Original Linked List :\n");
    linkedListTraversal(head);
    printf("\n");

    head = insertAtFirst(head, 56);
    printf("Linked List After Insertion At First :\n");
    linkedListTraversal(head);
    printf("\n");

    head = insertAtIndex(head, 1, 2);   //will not work for 0 index
    printf("Linked List After Insertion At An Index :\n");
    linkedListTraversal(head);
    printf("\n");
    
    head = insertAtEnd(head, 43);
    printf("Linked List After Insertion In The End :\n");
    linkedListTraversal(head);
    printf("\n");
    
    /*
    head = insertAfterNode(head, second, 43);
    printf("Linked List After A Given Node :\n");
    linkedListTraversal(head);
    printf("\n");
    */   //uncomment when comment the above insertion calls

    return 0;
}