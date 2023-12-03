#include<stdio.h>


int main(){
    FILE *ptr;

    //fgetc() demo for reading a file.
    
    /*
    ptr = fopen("81getcdemo.txt", "r"); 
    if(ptr == NULL){
        printf("This file does not exist.\n");
    }
    else{
        //char c = fgetc(ptr);
        
        printf("The value of my character is %c\n", fgetc(ptr));
        printf("The value of my character is %c\n", fgetc(ptr));
        printf("The value of my character is %c\n", fgetc(ptr));
        printf("The value of my character is %c\n", fgetc(ptr));
        printf("The value of my character is %c\n", fgetc(ptr));
        }
        fclose(ptr);
        */

    //fputc() demo for writing in a file.

    ptr = fopen("81putcdemo.txt", "w");
    putc('c', ptr); //putc()- to write character by cgaracter in a file.
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    
    return 0;
}