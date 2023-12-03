// Write an algorithm that reads the two numbers and print the value of the largest number.

#include <stdio.h>
int main(){
    int num1, num2;
    printf("ENTER FIRST NUMBER");
    scanf("%d", &num1);
    printf("ENTER SECOND NUMBER");
    scanf("%d", &num2);
    if(num1>num2) {
        printf("%d is greater", num1);
    } else {
        printf("%d is greater", num2);
    }
    return 0;
}
