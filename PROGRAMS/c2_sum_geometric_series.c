// Write a program to find sum of geometric series.
#include <stdio.h>
int main(){
    float a, r, sum =0;
    int n;
    printf("first term, a = ");
    scanf("%f", &a);
    printf("common ratio, r = ");
    scanf("%f", &r);
    printf("number of terms, n = ");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        sum = sum + a;
        a = a * r;
    }
    printf("Sum of geometric series = %f", sum);
    return 0;
}
