#include<stdio.h>
#include <stdlib.h>

// malloc() returns pointer of type void
int main(){
/*
    // sizeof() operator in c
    printf("The size of int in my lappy is %d.", sizeof(int));
    printf("The size of float in my lappy is %d.", sizeof(float));
    printf("The size of char in my lappy is %d.", sizeof(char));
 */   
    int *ptr;
    //ptr = malloc(6*4);  //4 is byte size  //6 is size of array
    ptr = (int *)malloc(6*sizeof(int));  //typecasted to int type becoz void ptr is returned
    for(int i=0; i<6; i++){
        printf("Enter the value of %d element is : ",i+1);
        scanf("%d", &ptr[i]);
    }
    
    for(int i=0; i<6; i++){
        printf("The value of %d element is : %d.\n",i+1, ptr[i]);
    }
    free(ptr);
    return 0;
}