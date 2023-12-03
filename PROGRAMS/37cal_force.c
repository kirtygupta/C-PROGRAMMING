#include<stdio.h>

float Force(float m); 
int main(){
    float force, mass;
    printf("Enter mass of the body in kg : ");
    scanf("%f",&mass);
    
    force = Force(mass);
    printf("Force of body of mass %f is : %.2f Newton\n", mass, force);  
    return 0;
}

float Force(float m){
    float result = m*9.8;
    return result;
}