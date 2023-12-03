#include<stdio.h>
#include<string.h>

//typedef is used to create an alias name

typedef struct employee{   
    int code;
    float salary;
    char name[20];
} emp;

void show(emp empl){
    printf("Code of employee is : %d\n", empl.code);
    printf("Salary of employee is : %f\n", empl.salary);
    printf("Name of employee is : %s\n", empl.name);
}

int main(){
    // Declaring e1 and ptr
    emp e1;
    emp *ptr;        
    
    // pointing ptr to e1
    ptr = &e1;

    // Set the member values of e1
    ptr->code = 101;
    ptr->salary = 11.10;
    strcpy(ptr->name, "Kirty");

    show(e1);

    return 0;
}
