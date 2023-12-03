#include<stdio.h>
#include<string.h>

int main(){

    char *st = "Kirty";
    int a = strlen(st); //tells length excluding the null character
    printf("The length of string st is %d\n",a);

    char st2[45];
    strcpy(st2,st);  // strcpy(target,source)
    printf("Now the st2 is %s\n",st2);
    
    char str3[45] = "Hello";
    char *str4 = "Kirty";
    strcat(str3,str4);
    printf("Now the str3 is %s\n",str3);

    int val = strcmp(str3,str4); //compare ascii values one by one 
    printf("Now the value is %d\n",val); //-1 becoz ascii of H is less than K

    return 0;
}