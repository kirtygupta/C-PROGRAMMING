// AREA OF CIRCLE

#include<stdio.h>

int main(){
    int radius;
    printf("Enter the value of radius : ");
    scanf("%d", &radius);
    float pi = 3.14;
    float area = pi*radius*radius;
    printf("The area of circle is : %f", area);
    
    return 0;
}

// AREA OF CYLINDER

#include<stdio.h>

int main(){
    int radius;
    printf("Enter the value of radius : ");
    scanf("%d", &radius);
    float pi = 3.14;
    float area = pi*radius*radius;
    int height;
    printf("Enter the value of height : ");
    scanf("%d", &height);
    printf("Volume of cylinder is %f", area*height);

    return 0;
}