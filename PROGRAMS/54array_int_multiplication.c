#include<stdio.h>
// MULTIPLICATION TABLE IN ARRAYS
int main(){
    int mul[10];
    int num;
    printf("Enter the number for which you want the multiplication table : ");
    scanf("%d", &num);
    for(int i=0; i<10; i++){
        mul[i] = num*(i+1);
    }
    
    for(int i=0; i<10; i++){
        printf("%d X %d = %d\n", num, i+1, mul[i]);
    }

    return 0;
}