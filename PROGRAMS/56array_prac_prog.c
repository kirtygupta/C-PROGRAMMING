// CONTAINS ARRAY OF n1Xn2 SIZE AND STORES n1 MULTIPLICATION TABLES
#include<stdio.h>

void printTable(int *mulTable, int num, int n);

int main(){
    int nu, mult;
    printf("Enter number of different multiplication tables you want to print : ");
    scanf("%d",&nu);
    int mulTable[nu][10];
    for(int k=0; k<nu; k++){
        printf("Enter the number for which you want multiplication : ");
        scanf("%d",&mult);
        printTable(mulTable[k],mult,10);
    }

    return 0;
}

void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is : \n",num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }
    for(int i=0; i<n; i++){
        printf("%d X %d = %d\n", num, i+1, mulTable[i]);
    }
    printf("***********************************************************************\n");
}