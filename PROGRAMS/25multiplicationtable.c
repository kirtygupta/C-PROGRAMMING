#include<stdio.h>
int main(){
    printf("\nMultiplication table : \n");
    for(int i=1;i<=10;i++){
        printf("10 X %d = %d\n",i,i*10);
    }
    printf("\nMultiplication table in REVERSE order : \n");
    for(int i=10;i;i--){
        printf("10 X %d = %d\n",i,i*10);
    }
    return 0;
}