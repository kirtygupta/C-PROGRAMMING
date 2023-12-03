#include<stdio.h>
// SUM IS A FUNCTION WHICH TAKES a AND b AS INPUT AND RETURNS INTEGER AS AN OUTPUT
int sum(int a, int b);  // a and b are parameters(function prototype)(where values are given)

int main(){
    int r;
    r = sum(2,5);  // 2 and 5 are arguments(function call)(actual values)
    printf("Result is : %d\n",r);
    return 0;
}

int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}