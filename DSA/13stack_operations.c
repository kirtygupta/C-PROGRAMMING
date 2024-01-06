#include<stdio.h>
#include<stdlib.h>

struct stack{    //STRUCTURE OF STACK
    int size;
    int top;
    int * arr;    //interger pointer to dynamically allocate memory
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack * ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack.\n");
        return -1;
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){

    //STACK CREATION
    struct stack *sp;    // structure pointer of stack
    sp = (struct stack *)malloc(sizeof(struct stack));    //structure instance dynamically created   //actuall space created in memory
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully.\n");

    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty:%d\n", isEmpty(sp));

    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    push(sp,6);
    push(sp,7);
    push(sp,8);
    push(sp,9);
    push(sp,10);     //--->Pushed 10 values
    //push(sp,11);     // Stack overflow since the size of the stack is 10

    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));

    printf("Popped %d from the stack.\n",pop(sp));  //LIFO
    printf("Popped %d from the stack.\n",pop(sp));  //LIFO
    printf("Popped %d from the stack.\n",pop(sp));  //LIFO

    return 0;
}