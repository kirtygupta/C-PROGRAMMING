// Write recursive program to print the first m Fibonacci numbers.
#include<stdio.h>
int fibonacci(int n);
int main(){
    int n, i;
    printf("Enter number of Fibonacci Number to print : ");
    scanf("%d", &n);
    printf("First %d Fibonacci Number(s) : ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n){
    int i;
    if (n == 0) {
        i = 0;
    }
    else if (n == 1) {
        i = 1;
    }
    else {
        i = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return i;
}
