#include<stdio.h>
int main(){
    // Disclaimer: This is not the best method to solve this problem.
    int n, prime=1;
    printf("Enter a number to check if it is prime or not : ");
    scanf("%d",&n);
    for (int i = 2; i < n;i++){
        if (n % i == 0){
            prime = 0;   // FALSE hota h
            break;
    }
    }
    if (prime == 0){
        printf("This is not a prime number.");
    }
    else{
        printf("This is a prime number.");
    }
        return 0;
}