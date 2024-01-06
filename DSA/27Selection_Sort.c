#include<stdio.h>

void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }  
    printf("\n");
}

void selectionSort(int A[], int n){
    int indexOfMin;
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {      // TO GET MINIMUM ELEMENT
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        //SWAPPING A[i] AND A[indexOfMin]
        int temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;        
    }
    
}

int main(){
    // INPUT ARRAY -----> (n-1) PASSES
    // 00 01 02 03 04
    // 03 05 02 13 12

    // 02 05 03 13 12--->1ST PASS
    // 02 03 05 13 12--->2ND PASS
    // 02 03 05 13 12--->3RD PASS
    // 02 03 05 12 13--->4TH PASS
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;    //SIZE

    printf("Array before Sorting : \n");
    printArray(A, n);

    selectionSort(A, n);
    printf("Array after Selection Sorting : \n");
    printArray(A, n);

    return 0;
}