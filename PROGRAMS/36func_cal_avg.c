#include<stdio.h>

float average(int a, int b, int c); 
int main(){
    int num1, num2, num3;
    float avg;
    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("Enter 2nd number : ");
    scanf("%d",&num2);
    printf("Enter 1st number : ");
    scanf("%d",&num3);
    avg = average(num1, num2, num3);
    printf("Average of %d, %d, %d is : %f\n", num1, num2, num3, avg);  
    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (float)(a+b+c)/3;
    return result;
}