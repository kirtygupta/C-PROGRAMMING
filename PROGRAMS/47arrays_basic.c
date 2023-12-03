#include<stdio.h>
int main(){
    // NAIVE WAY TO CREATE 4 INTS
    // int marks1, marks2, marks3, marks4;
    // marks1 = 34;
    // marks2 = 55;
    // marks3 = 67;
    // marks4 = 88;
    int marks[4];
    marks[0] = 34;
    marks[1] = 55;
    marks[2] = 67;
    marks[3] = 88;

    int a[] = {34, 67, 78};
    printf("The value of a[0] is %d.\n",a[0]);
    printf("The value of a[1] is %d.\n",a[1]);
    printf("The value of a[2] is %d.\n",a[2]);

    float b[] = {3.4, 6.7, 7.8};
    printf("The value of b[0] is %f.\n",b[0]);
    printf("The value of b[1] is %f.\n",b[1]);
    printf("The value of b[2] is %f.\n",b[2]);
    return 0;
}