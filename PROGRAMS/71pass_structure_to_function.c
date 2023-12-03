#include<stdio.h>
#include<string.h>

struct employee{   
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp);

int main(){

    struct employee e1;
    struct employee *ptr;        
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 11.10;
    strcpy(ptr->name, "Kirty");

    show(e1);
    printf("Code of employee is : %d\n", e1.code); // NO CHANGES BECAUSE STRUCTURE KI COPY GAYI HOTI H FUNCTION ME

    return 0;
}

void show(struct employee emp){
    printf("Code of employee is : %d\n", emp.code);
    printf("Salary of employee is : %f\n", emp.salary);
    printf("Name of employee is : %s\n", emp.name);

    emp.code = 34;
}