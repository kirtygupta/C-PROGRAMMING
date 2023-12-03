#include<stdio.h>
#include<string.h>

struct employee{   
    int code;
    float salary;
    char name[20];
};

int main(){

    struct employee e1;
    struct employee *ptr;    //ptr will point to struct employee type variable
    
    ptr = &e1;
    (*ptr).code = 101;
    // OR can also write above as:
    //ptr->code = 101;   // ARROW OPERATOR
    printf("%d", e1.code);


    return 0;
}