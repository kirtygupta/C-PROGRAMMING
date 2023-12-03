// Write a program to check whether a number is even or odd.

#include <stdio.h>
int main(){
    int num1;
    printf("ENTER THE NUMBER");
    scanf("%d", &num1);
    if(num1%2==0) {
        printf("%d is even", num1);
    } else {
        printf("%d is odd", num1);
    }
    return 0;
}
