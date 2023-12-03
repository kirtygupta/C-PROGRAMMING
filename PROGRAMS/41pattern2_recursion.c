//*
//***
//*****

#include<stdio.h>
void printPattern(int n);
int main(){
    int num;
    printf("Enters number of lines : ");
    scanf("%d",&num);
    printPattern(num);
    return 0;
}
void printPattern(int n){
    if(n==1){
        printf("*\n");
        return;
    }

    printPattern(n-1);

    for(int i=0;i<((2*n)-1);i++){ // (2n-1):GENERATE ODD NUMBERS 
        printf("*");
    }
    printf("\n");
}