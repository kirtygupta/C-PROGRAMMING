#include<stdio.h>


int main(){
    FILE *ptr;
    // READING INTEGERS FROM A FILE  
    int num;
    int num2;
    ptr = fopen("78Kirty.txt", "r"); 
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d.\n", num);
    fscanf(ptr, "%d", &num2);
    printf("The value of num2 is %d.\n", num2);
    fclose(ptr);
    return 0;
}