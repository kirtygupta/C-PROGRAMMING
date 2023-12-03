#include<stdio.h>
#include<string.h>

// STORE DETAILS OF 3 EMPLOYEES FROM USER DEFINED DATA.

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    int a = 34;
    char b = 'g';
    float d =234.567;
    //employee e1;
    //e1.salary 343.567; ----> wont work without employee structure

    struct employee e1, e2, e3;
    printf("Enter the code of e1 : ");
    scanf("%d", &e1.code);
    printf("Enter the salary of e1 : ");
    scanf("%f", &e1.salary);
    printf("Enter the name of e1 : ");
    scanf("%s", e1.name); // array of characters...already stores address


    printf("Enter the code of e2 : ");
    scanf("%d", &e2.code);
    printf("Enter the salary of e2 : ");
    scanf("%f", &e2.salary);
    printf("Enter the name of e2 : ");
    scanf("%s", e2.name);


    printf("Enter the code of e3 : ");
    scanf("%d", &e3.code);
    printf("Enter the salary of e3 : ");
    scanf("%f", &e3.salary);
    printf("Enter the name of e3 : ");
    scanf("%s", e3.name);

    return 0;
}