/*Write a program to find sum of numbers and average of all numbers using arrays (i.e C program) to read N integers into an array A and
a)	Find the sum of all numbers.
b)	Find the average of all numbers and display the result with suitable headings.*/

#include <stdio.h>
int main() {
    int i, item, sum=0;
    float avg;
    printf("Enter the number of elements : ");
    scanf("%d", &item);
    int arr[item];
    for(i=0; i<item; i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<item; i++) {
        sum+=arr[i];
    }
    avg = (float)sum/item;
    printf("Sum of all numbers = %d\n", sum);
    printf("Average of all numbers = %f", avg);
    return 0;
} 