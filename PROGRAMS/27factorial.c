#include<stdio.h>
int main(){
    int i=0, n,fact=1;
    printf("Enter number of which you want factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact *= i;        
    }
    printf("The factorial of the given number %d is %d",n,fact);
    return 0;
}