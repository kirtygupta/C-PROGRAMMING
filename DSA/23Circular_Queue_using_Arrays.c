#include<stdio.h>
#include<stdlib.h>

// IMP : IN CIRCULAR QUEUE FRONT IS ALWAYS EMPTY
struct circularQueue{
    int size;
    int f; 
    int r; 
    int * arr;
};

int isFull(struct circularQueue * q){
    if((q->r+1) % q->size == q->f){     // CIRCULAR INCREMENT:  (q->r+1) % q->size
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct circularQueue * q){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct circularQueue * q, int val){
    if(isFull(q)){
        printf("Circular Queue is Full.\n");
    }
    else{
        q->r = (q->r+1) % q->size;      // CIRCULAR INCREMENT
        q->arr[q->r] = val;
        printf("Enqued element : %d\n", val);
    }
}

int dequeue(struct circularQueue * q){
    int a = -1;
    if(isEmpty(q)){
        printf("Circular Queue is Empty.\n");
    }
    else{
        q->f = (q->f+1) % q->size;      // CIRCULAR INCREMENT
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size = 5;
    q.f = q.r = 0;      //CIRCULAR QUEUE CONDITION
    q.arr = (int *)malloc(q.size*sizeof(int));


    //Enqueue few elements:
    enqueue(&q, 11);     //&-> addressis given ...it will change the original queue
    enqueue(&q, 12); 
    enqueue(&q, 13); 
    enqueue(&q, 14); 

    printf("Dequeuing element %d.\n", dequeue(&q));
    printf("Dequeuing element %d.\n", dequeue(&q));
    printf("Dequeuing element %d.\n", dequeue(&q));
    printf("Dequeuing element %d.\n", dequeue(&q));

    enqueue(&q, 15); 
    enqueue(&q, 16); 
    enqueue(&q, 17); 
    enqueue(&q, 18); 
    
    if(isEmpty(&q)){
        printf("Circular Queue is Empty.\n");
    }

    if(isFull(&q)){
        printf("Circular Queue is Full.\n");
    }

    return 0;
}
