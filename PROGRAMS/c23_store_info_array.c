// Write a program to store information of 5 students by using an array of structures. 

#include <stdio.h>
struct student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter information for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nDisplaying information of students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}