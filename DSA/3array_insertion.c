#include<stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n"); 
}

//BASIC INSERTION AT A GIVEN INDEX
int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    // to shift elements and add element at given index:
    for (int i = size-1; i>=index; i--)  //(size-1)-shifting last element first
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, capacity=100, index=3;
    display(arr, size);
    
    int element = 45;
    indInsertion(arr, size, element, capacity, index);
    size++;
    display(arr, size);

    return 0;
}