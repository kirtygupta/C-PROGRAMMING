#include<stdio.h>

int main(){

    char s[34];
    /*printf("Enter your name : ");
    scanf("%s",s);
    printf("Your name is %s.",s);*/

// gets() and puts()
    printf("Enter your name : ");
    gets(s);
    puts(s); // puts in next line
    printf("Your name is %s.",s);

    return 0;
}