#include<stdio.h>


int main(){
    FILE *ptr;  // FILE- i a structure ; *ptr-pointer
    //ptr = fopen("77sample.txt", "r"); //---> for reading a file
    ptr = fopen("77sample.txt", "w"); //---> for writing a file
    fclose(ptr); //closing file is a good practice
    return 0;
}