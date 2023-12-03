#include<stdio.h>
int main(){

    int marks[4];
    int *ptr;
    ptr = &marks[0];  // WE CAN ALSO WRITE THIS AS: ptr = marks;

    for(int i=0; i<4; i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }    

    for(int i=0; i<4; i++){
        printf("The marks of student %d is %d.\n",i+1,marks[i]);
        ptr++;
    }

    return 0;
}