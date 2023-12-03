#include<stdio.h>

void display();  // FUNCTION PROTOTYPE

int main(){
    int a;
    printf("Initilising display function.\n");
    display();   // FUNCTION CALL
    printf("Display function finished, it worked.\n");
    return 0;
}

void display(){  // FUNCTION DEFINITION
    printf("This is display.\n");
}