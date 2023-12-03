// Write a program to understand the concept of call by value and call by reference. 

#include <stdio.h>  
void swapByVal(int a, int b);
void swapByRef(int *a, int *b);
int main() {  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b = %d\n\n", a,b);
    swapByVal(a,b);  
    printf("After swapping values in main (using call by value) a = %d, b = %d\n\n",a,b);

    swapByRef(&a,&b);  
    printf("After swapping values in main (using call by reference) a = %d, b = %d\n",a,b);
}  
void swapByVal(int a, int b) {
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf("After swapping values in function (with call by value) a = %d, b = %d\n",a,b);
} 

void swapByRef(int *a, int *b) {
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function (with call by refernce) a = %d, b = %d\n",*a,*b);
} 
