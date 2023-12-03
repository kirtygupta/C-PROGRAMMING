#include<stdio.h>
#include<string.h>

int main(){

    char st1[34];  
    char st2[34]; 
    char c;
    int i=0;

    printf("Enter the value of 1st string : ");
    scanf("%s",st1);   // with %s

    printf("Enter the value of 2nd string character by character : \n");

    while(c!='\n'){
        fflush(stdin);   // used to remove the previous input from scanf
        scanf("%c", &c);
        st2[i] = c;
        i++;
    } 
    st2[i]='\0'; // st2[i-1]='\0'; // doing this will make the strings equal

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s", st2);

    printf("strcmp for these strings return %d", strcmp(st1,st2)); // -1 becoz st2 contains \0 as another extra char

    return 0;
}