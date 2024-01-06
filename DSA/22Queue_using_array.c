#include<stdio.h>
#include<stdlib.h>
//LINEAR QUEUE
struct queue{
    int size;
    int f; //for front-index (which is one position behind the first element)
    int r; //for rear/back-index
    int * arr;
};

int isFull(struct queue * q){
    if(q->r == q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct queue * q){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue * q, int val){
    if(isFull(q)){
        printf("Queue is Full.");
    }
    else{
        q->r++;     //OR:   q->r = q->r+1;
        q->arr[q->r] = val;
        printf("Enqued element : %d\n", val);
    }
}

int dequeue(struct queue * q){
    int a = -1;
    if(isEmpty(q)){
        printf("Queue is Empty.");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));


    //Enqueue few elements:
    enqueue(&q, 11);     //&-> addressis given ...it will change the original queue
    enqueue(&q, 12); 
    enqueue(&q, 13); 
    enqueue(&q, 14); 
    enqueue(&q, 15); 

    printf("Dequeuing element %d.\n", dequeue(&q));
    printf("Dequeuing element %d.\n", dequeue(&q));
    printf("Dequeuing element %d.\n", dequeue(&q));
    printf("Dequeuing element %d.\n", dequeue(&q));
    printf("Dequeuing element %d.\n", dequeue(&q));

    if(isEmpty(&q)){
        printf("Queue is Empty.\n");
    }

    if(isFull(&q)){
        printf("Queue is Full.\n");
    }

    return 0;
}