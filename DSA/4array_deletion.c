// ARRAY DELETION
#include<stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n"); 
}

//BASIC DELETION AT A GIVEN INDEX
int indDeletion(int arr[], int size, int capacity, int index){
    if(index>=capacity-1){
        return -1;
    }
    // to shift elements after deleting element at given index:
    for (int i = index; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

int main(){
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, capacity=100, index=2;
    display(arr, size);
    
    int element = 45;
    indDeletion(arr, size, capacity, index);
    size--;
    display(arr, size);

    return 0;
}