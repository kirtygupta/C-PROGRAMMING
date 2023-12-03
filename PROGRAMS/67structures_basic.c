#include<stdio.h>
#include<string.h>

struct employee{   // structure - user defined data type
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

    struct employee e1;

    e1.code = 100;
    e1.salary = 343.567;
    //e1.name = "Kirty";   ---->wont work
    strcpy(e1.name, "Kirty");

    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);

    // ARRAY INITIALISATION

    struct employee kirty = {100, 34.23, "Kirty"};

    printf("Name is %s\n", kirty.name);
    printf("Code is %d\n", kirty.code);
    printf("Salary is %f\n", kirty.salary);

    struct employee rohan ={0}; // all elements set to zero
    printf("Name is %s\n", rohan.name);
    printf("Code is %d\n", rohan.code);
    printf("Salary is %f\n", rohan.salary);

    return 0;
}