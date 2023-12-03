#include<stdio.h>
#include<math.h>

float area(int side); 
int main(){
    int s;
    printf("Enter side of square : ");
    scanf("%d",&s);
    float ar = area(s);
    printf("Area of square is : %f\n", ar);  

    return 0;
}

float area(int side){
    float area = pow(side,2);
    return area;
}