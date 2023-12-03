#include<stdio.h>
void swap(int *x, int *y);
void wrong_swap(int x, int y);
int main(){
    int a = 4, b =7;
    printf("The value of a and b before function call is %d and %d.\n", a, b);
    //wrong_swap(a,b); // WILL NOT WORK DUE TO CALL BY VALUE
    swap(&a,&b);    // WILL WORK DUE TO CALL BY REFERENCE
    printf("The value of a and b after function call is %d and %d.\n", a, b);
    return 0;
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void wrong_swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;

}