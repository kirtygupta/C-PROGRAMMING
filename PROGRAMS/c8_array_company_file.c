// An array of record contains information of managers and workers of a company. 
//Print all the data of managers and workers in separate files.

#include <stdio.h>
#include <string.h>
/*An array of records contains information of managers and workers that are saved to
 files managers.txt and workers.txt separately*/
#define MAX_RECORDS 100
#define MAX_NAME_LENGTH 50

struct Employee
{
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
} ;

void saveEmployeeData(char *fileName, struct Employee *employee, int count)
{
    FILE *fp = fopen(fileName, "w");
    if (fp == NULL)
    {
        printf("Error opening file %s\n", fileName);
        return;
    }
    int i;
    for ( i = 0; i < count; i++)
    {
        fprintf(fp, "%s,%d,%f\n", employee[i].name, employee[i].age, employee[i].salary);
    }

    fclose(fp);
    printf("Data saved to file %s\n", fileName);
}

int main()
{
    struct Employee managers[MAX_RECORDS];
    int managerCount;

    struct Employee workers[MAX_RECORDS];
    int workerCount ;

    char input[MAX_NAME_LENGTH];
    int age;
    float salary;
    int choice;
    int i;
    while (1)
    {
        printf("Enter 1 to add manager data, 2 to add worker data, 3 to save and exit: ");
        scanf("%d", &choice);

        if (choice == 3)
        {
            break;
        }
        if (choice == 1)
        {
            printf("Enter no. of managers:");
            scanf("%d",&managerCount);
            for(i=0;i<managerCount;i++){
                printf("Enter name: ");
                scanf("%s", input);
                strcpy(managers[managerCount].name, input);
                printf("Enter age: ");
                scanf("%d", &age); 
                managers[managerCount].age = age;
                printf("Enter salary: ");
                scanf("%f", &salary);
                managers[managerCount].salary = salary;}
        }
        else if (choice == 2)
        {
            printf("Enter no. of workers:");
            scanf("%d",&workerCount);
            for (i=0;i<workerCount;i++){
                printf("Enter name: ");
                scanf("%s", input);
                strcpy(workers[workerCount].name, input);
                printf("Enter age: ");
                scanf("%d", &age); 
                workers[workerCount].age = age;
                printf("Enter salary: ");
                scanf("%f", &salary);
                 workers[workerCount].salary = salary;
            }
        }
    }

    // Save managers data to file
    saveEmployeeData("managers.txt", managers, managerCount);

    // Save workers data to file
    saveEmployeeData("workers.txt", workers, workerCount);

    return 0;
}
