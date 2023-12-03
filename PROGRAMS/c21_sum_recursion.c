// Write a program to find sum of Natural numbers using recursion.

#include <stdio.h>
int add(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of %d natural number(s) = %d", num, add(num));
    return 0;
}

int add(int n) {
    int i;
    if(n == 0) {
        i = n;
    } else {
        i = n + add(n - 1);
    }
    return i;
} 
