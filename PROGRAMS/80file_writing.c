#include<stdio.h>


int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("80generated.txt", "w"); 
    
    fprintf(fptr,"The number is %d.\n", number);
    fprintf(fptr,"Thanks for using fprintf().\n");
    fclose(fptr);
    
    return 0;
}