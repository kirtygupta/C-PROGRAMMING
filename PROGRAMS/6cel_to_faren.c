// CELSIUS TO FARENHEIT

#include<stdio.h>

int main(){
    float cel, far;
    printf("Enter value in Celsius : ");
    scanf("%f", &cel);
    far = (cel * 9/5) + 32;
    printf("The value of this celsius temperature in farenheit is %f", far);

    return 0;
}