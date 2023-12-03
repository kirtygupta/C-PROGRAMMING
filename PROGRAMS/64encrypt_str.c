#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr+1; //ascii value of element is added with 1 and new element is placed with new ascii value Eg) 'a' is replaced by 'b'
        ptr++;
    }
}



int main(){
    char c[] = "Hi there Kirty.";
    encrypt(c);
    printf("Encrypted string is : %s.",c);

    return 0;
}