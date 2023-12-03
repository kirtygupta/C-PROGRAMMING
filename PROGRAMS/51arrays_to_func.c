#include<stdio.h>

void printArray(int *ptr, int n);

int main(){
    int arr[] = {11,12,13,14,15,16,17,18,19,20};
    printArray(arr,10);

    return 0;
}

void printArray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d.\n",i+1,*(ptr+i));
    }
    ptr[2] = 55; // This value will be changed in arr array of main as well.
}

// (ptr+i) = (address of 1st element + 0)
// (ptr+i) = (address of 1st element + 1) = address of 2nd element
// (ptr+i) = (address of 1st element + 2) = address of 3rd element
// (ptr+i) = (address of 1st element + 3)......so on......

// OR

/*
void printArray(int ptr[], int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d.\n",i+1,ptr[i]);
    }
}
*/