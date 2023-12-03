/*Write a program to perform the following operators on Strings without using String functions
•	To find the Length of String.
•	To concatenate the string.
•	To find Reverse of a string.
•	To copy one string to another string*/

#include <stdio.h>
int main(){
    int option;
    int i, j=0, len;
    char str1[500];
    char str2[500];

    printf("Enter String (500 or less) : ");
    gets(str1);
    printf("String Entered :\n%s\n", str1);

    for(len=0; str1[len]!='\0'; ++len);

    printf("Enter operation to perform\n"
    "1 - Length of the string\n"
    "2 - Concatenate the strings\n"
    "3 - Reverse of the string\n"
    "4 - Copy String\n"
    "5 - Exit\n"
    "(1,2,3,4,5) : ");
    scanf("%d", &option);
    switch (option) {
    case 1:
        printf("Length Of String : %d\n", len);
        break;
    case 2:
        printf("Enter String 2 (500 or less) : ");
        gets(str2);
        printf("String Entered :\n%s\n", str2);

        for(i=0; str2[i]!='\0'; i++) {
            str1[len+i] = str2[i];
        }
        str1[len+i] = '\0';
        printf("Concatenated String :\n%s\n", str1);
        break;
    case 3:
        for(i=len-1; i>=0; i--) {
            str2[j] = str1[i];
            j++;
        }
        str2[j] = '\0';
        printf("Reversed String :\n%s\n", str2);
        break;
    case 4:
        for(i=0; str1[i]!='\0'; i++) {
            str2[i] = str1[i];
        }
        str2[i] = '\0';
        printf("Copied String :\n%s\n", str2);
    case 5:
        return 0;
    
    default:
        printf("Invalid Input.");
        break;
    }
    return 0;
}
