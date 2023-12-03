// Write a program to convert decimal number to binary number.

#include <stdio.h>
int main() {
    int i, j, k=0, dec, len;
    int bin[64];

    printf("Enter Decimal Number : ");
    scanf("%d", &dec);
    for(i=dec; i!=0; i=i/2) {
        bin[k++] = i%2;
        //printf("%d\n", bin[k++]);
    }
    printf("Binary = ");
    for (j = k-1; j >= 0; j--)
        printf("%d", bin[j]);
    return 0;
}
