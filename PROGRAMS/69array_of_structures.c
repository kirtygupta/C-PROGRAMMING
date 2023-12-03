#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    
    struct employee facebook[100];  //facebook is an array of struct employee type, here 100 employees can come

    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "Kirty");

    facebook[1].code = 101;
    facebook[1].salary = 90.45;
    strcpy(facebook[1].name, "Rohan");

    facebook[2].code = 102;
    facebook[2].salary = 190.45;
    strcpy(facebook[2].name, "Ria");

    //till 100 employees.....

    printf("Done....No Error");
 
    return 0;
}