// CALCULATE SIMPLE INTERST

#include<stdio.h>

int main(){
    int pri, rate, time,si;
    
    printf("Enter Principle Amount : ");
    scanf("%d", &pri);
    printf("Enter Rate : ");
    scanf("%d", &rate);
    printf("Enter Time : ");
    scanf("%d", &time);
    si = (pri*rate*time)/100;
    printf("Simple Interst will be = %d", si);
    return 0;
}