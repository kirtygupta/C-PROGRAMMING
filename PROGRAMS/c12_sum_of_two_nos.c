// Write a program to find the sum of two numbers.

#include <stdio.h>

int main(){
    int num1, num2, sum;
    printf("ENTER FIRST NUMBER ");
    scanf("%d", &num1);
    printf("ENTER SECOND NUMBER ");
    scanf("%d", &num2);
    
    sum = num1+num2;

    printf("Sum of %d and %d is %d", num1, num2, sum);
    return 0;
}