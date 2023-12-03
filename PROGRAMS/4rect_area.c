// AREA OF RECTANGLE

#include<stdio.h>

int main(){
    int length, breadth;
    printf("Enter the value of length : ");
    scanf("%d", &length);
    printf("Enter the value of breadth : ");
    scanf("%d", &breadth);
    int area = length*breadth;
    printf("The area of rectangle is : %d", length*breadth);
    printf("\nThe area of rectangle is : %d", area);

    return 0;
}