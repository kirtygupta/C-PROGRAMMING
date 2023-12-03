/*Write a Program to store records of a student in student file. 
The data must be stored using Binary File. Read the record stored in “Student.txt” file in Binary code. 
Edit the record stored in Binary File. Append a record in the student file.*/

#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_no;
    char name[20];
    float marks;
};

void write_data(struct student s) {
    FILE *fp;
    fp = fopen("student.bin", "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}

void read_data(int roll) {
    FILE *fp;
    struct student s;
    fp = fopen("student.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll_no == roll) {
            printf("Roll Number: %d\n", s.roll_no);
            printf("Name: %s\n", s.name);
            printf("Marks: %.2f\n", s.marks);
        }
    }
    fclose(fp);
}

void update_data(int roll, float marks) {
    FILE *fp;
    struct student s;
    fp = fopen("students.bin", "rb+");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll_no == roll) {
            s.marks = marks;
            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            break;
        }
    }
    fclose(fp);
}

int main() {
    struct student s1 = {1, "John Doe", 85.5};
    struct student s2 = {2, "Jane Doe", 90.0};
    write_data(s1);
    write_data(s2);
    printf("Record of student 1 :-\n");
    read_data(1);
    printf("Record of student 2 :-\n");
    read_data(2);
    update_data(1, 95.0);
    printf("after updation of record of student 1:\n");
    read_data(1);
    return 0;
}
