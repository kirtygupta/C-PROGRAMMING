#include<stdio.h>
// TO PRINT
int main(){
    char str1[] = {'K','i','r','t','y','\0'};
    char *ptr1 = str1;
    while(*ptr1 != '\0'){
        printf("%c", *ptr1);
        ptr1++;
    }

    printf("\n");    // OR

    char str2[] = "Kirty";

    
    char *ptr2 = str2;
    while(*ptr2 != '\0'){
        printf("%c", *ptr2);
        ptr2++;
    }

    printf("\n");

    // ANOTHER METHOD TO PRINT

    char *ptr = "Kirty Gupta";  // reinitialization of array is possible
    //OR
    //char ptr[] = "Kirty Gupta";  // reinitialization of array is not possible
    ptr = "Rohan";
    printf("%s",ptr);

    return 0;
}