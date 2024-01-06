//BINARY SEARCH
#include<stdio.h>

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    //start searching
    //keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;  //automatically will take greatest integer in c language
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid+1; //starting from next element of mid
        }
        else{
            high = mid-1; //starting from previous element of mid
        }
    }
    //end searching
    return -1;
}

int main(){
    //SORTED ARRAY FOR BINARY SEARCH
    int arr[]= {1, 3, 5, 56, 64, 73, 123, 225, 463};
    int element = 64;
    int size = sizeof(arr)/sizeof(int); //SIZE OF ARRAY
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d. \n",element, searchIndex);
    return 0;
}