#include<stdio.h>

void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }  
    printf("\n");
}

void bubbleSort(int A[], int n){  //Time complexity Worst case: O(n^2)
    for (int i = 0; i < n-1; i++)   // FOR NUMBER OF PASS
    {   
        printf("Pass : %d\n", i+1);
        for (int j = 0; j < n-i-1; j++)     //FOR COMPARISON IN EACH PASS
        {
            printf("Comparison : %d\n", j+1);

            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int A[], int n){

    //MAKING BUBBLE SORT ADAPTIVE (ORIGINALLY IT IS NOT BUT CAN BE MADE)----> O(n):converted
    int isSorted = 0;   //CURRENTLY ASSUMIG NOT SORTED
    for (int i = 0; i < n-1; i++)   // FOR NUMBER OF PASS
    {   
        printf("Pass : %d\n", i+1);
        isSorted = 1;   //ASSUMED SORTED (AGAR NEXT FOR LOOP KE IF LOOP ME NAHI GAYA TOH)
        for (int j = 0; j < n-i-1; j++)     //FOR COMPARISON IN EACH PASS
        {
            printf("Comparison : %d\n", j+1);

            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;    //UNSORTED
            }

        }

        if(isSorted){
            return;
        }

    }
}

int main(){
    //int A[] = {12, 54, 65, 7, 23, 9};
    int A[] = {1, 2, 3, 4, 5, 6};
    int n = 6;    //SIZE

    printf("Array before Sorting : \n");
    printArray(A, n);

    bubbleSort(A, n);
    printf("Array after Bubble Sorting : \n");
    printArray(A, n);

    bubbleSortAdaptive(A, n);
    printf("Array after Bubble Sorting (Adaptive) : \n");
    printArray(A, n);

    return 0;
}