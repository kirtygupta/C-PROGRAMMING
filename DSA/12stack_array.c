//STACK USING ARRAY
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr; //--> pointer used to dynamically allocate memory of the array that wil hold the stack
};

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;  // stack is empty
    }else{
        return 0;  //stack is not empty
    }
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;  // stack is full
    }else{
        return 0;  //stack is not full
    }
}

int main(){
    //struct stack s;      //To make a stack
    //s.size = 80;
    //s.top = -1;
    //s.arr = (int*)malloc(s.size*sizeof(int));

    struct stack *s;     //stack structure pointer
    s->size = 6;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));

    //PUSHING AN ELEMENT MANUALLY
    /*s->arr[0] = 1;
    s->top++;
    s->arr[0] = 2;
    s->top++;
    s->arr[0] = 3;
    s->top++;
    s->arr[0] = 4;
    s->top++;
    s->arr[0] = 5;
    s->top++;
    s->arr[0] = 6;
    s->top++;*/

    //CHECK IF STACK IS EMPTY
    if(isEmpty(s)){
        printf("The stack is empty.\n");
    }else{
        printf("The stack is not empty.\n");
    }

    if(isFull(s)){
        printf("The stack is full.\n");
    }else{
        printf("The stack is not full.\n");
    }
    
    return 0;
}