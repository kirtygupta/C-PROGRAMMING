//*
//**
//***
//****

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

    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
}