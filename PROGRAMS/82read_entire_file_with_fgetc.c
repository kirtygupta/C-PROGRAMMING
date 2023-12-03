#include<stdio.h>


int main(){
    FILE *ptr;
    char c;
    ptr = fopen("81getcdemo.txt", "r"); 
    if(ptr == NULL){
        printf("This file does not exist.\n");
    }
    else{
        c = fgetc(ptr);
        while(c != EOF){
            printf("%c", c);
            c = fgetc(ptr);
        }
        
        }
        fclose(ptr);

    
    return 0;
}