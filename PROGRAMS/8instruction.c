// INSTRUCTIONS
//TYPE DECLARATION
/*
#include<stdio.h>

int main(){
    
    // //int a = 4; // TYPE DECLARACTION INSTRUCTION
    // int a = 4,b,c; // TYPE DECLARACTION INSTRUCTION
    // b = c = a;
    // printf("The value of a is %d\n", a);
    // printf("The value of b is %d\n", b);
    // printf("The value of c is %d\n", c);

    float a = 1.1;
    float b = a + 8.9;
    printf("The value of b is %f", b);
    return 0;
}*/

// ARITHEMETIC INSTRUCTIONS

#include<stdio.h>

int main(){
    
    int a = 4;
    int b = 8;
    printf("The value of a+b is: %d\n", a+b);
    printf("The value of a-b is: %d\n", a-b);
    printf("The value of a*b is: %d\n", a*b);
    printf("The value of a/b is: %d\n", a/b);
    printf("a/b gives a remainder of: %d\n", a%b);
    printf("-a/b gives a remainder of: %d\n", -a%b);
    printf("a/-b gives a remainder of: %d\n", a%-b);
    // NO OPERATOR IS ASSUMED TO BE PRESENT
    // THERE IS NO OPERATOR TO PERFORM EXPONENTIATION IN C, WE USE pow(x,y) FUNCTION INCLUDING include<math.h> LIBRARY
    return 0;
}
