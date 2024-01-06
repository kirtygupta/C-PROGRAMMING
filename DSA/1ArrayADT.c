// ARRAY ADT IMPLEMENTATION
#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;    //memory to be reserved
    int used_size;    //memory to be used
    int *ptr;         // points to the first element 
};

//Reserved Memory
void createArray(struct myArray *a, int tSize, int uSize){
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*)malloc(tSize*sizeof(int));   //To take memory from heap
}

void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
    
}

void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
    
}

int main(){
    struct myArray marks;     // marks is an array of type struct myArray
    createArray(&marks, 10,2);
    printf("We are running setVal() now.\n");
    setVal(&marks);
    printf("We are running show() now.\n");
    show(&marks);
    return 0;
}