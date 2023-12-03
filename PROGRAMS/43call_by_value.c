#include<stdio.h>
int sum(int x, int y);
int main(){
    int a = 4, b =7;
    printf("The value of a and b before function call is %d and %d.\n", a, b);
    printf("The values of %d + %d is %d.\n",a,b,sum(a,b));
    printf("The value of a and b after function call is %d and %d.\n", a, b);
    return 0;
}
int sum(int x, int y){
    int c;
    c=x+y;
    x = 234;
    y = 546;
    return c;
}