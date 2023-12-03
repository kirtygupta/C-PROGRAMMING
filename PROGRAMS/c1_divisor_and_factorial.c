// Write a program to find divisor or factorial of a given number.
#include <stdio.h>
int main(){
    int num1, i, fact;
    fact = 1;
    printf("ENTER THE NUMBER ");
    scanf("%d", &num1);
    printf("Divisor of %d are \n", num1);
    for(int i=1;i<=num1;i++){
        if(num1%i==0){
            printf("%d\n",i);
        }
    }
    printf("Factorial of %d is \n", num1);
    for(int i=1;i<=num1;i++){
        fact = fact*i;
    }
    printf("%d", fact);
    return 0;
}
