/*Write a program to understand the concept of continue statement and calculate sum of numbers. 
If a user enters a negative number, it is not added into result.*/

#include <stdio.h>
int main() {
    int numoitem, num, i, sum=0;
    printf("Enter number of items you will be entering : ");
    scanf("%d", &numoitem);

    for(i=1; i<=numoitem; i++) {
        printf("Enter number %d : ", i);
        scanf("%d", &num);
        if(num<0) {
            continue;
        }
        sum += num;
    }
    printf("Sum of numbers = %d", sum);
    return 0;
}
