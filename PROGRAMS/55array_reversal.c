#include<stdio.h>
// ARRAY REVERSAL
void reverse(int *arr, int n);
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};    
    reverse(arr,10);
    for(int i=0; i<10; i++){
        printf("The value of %d element is %d. \n", i+1, arr[i]);
    }
    return 0;
}
void reverse(int *arr, int n){
    int temp;
    for(int i=0; i<(n/2); i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}