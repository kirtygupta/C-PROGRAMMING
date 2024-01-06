// LINEAR SEARCH
#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]= {1, 3, 5, 56, 4, 3, 23, 54, 63, 10};
    int element = 23;
    int size = sizeof(arr)/sizeof(int); //SIZE OF ARRAY
    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d. \n",element, searchIndex);
    return 0;
}