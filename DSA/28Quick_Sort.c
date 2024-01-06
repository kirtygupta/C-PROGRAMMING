#include<stdio.h>

void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }  
    printf("\n");
}

int partition(int A[], int low, int high){
    int pivot = A[low]; //FIRST ELEMENT OF ARRAY IS TAKEN AS PIVOT
    int i = low + 1;
    int j = high;

    do{
        while (A[i] <= pivot)
        {   //TO FIND AN ELEMENT WHICH IS GREATER THAN PIVOT
            i++;
        }

        while (A[j] > pivot)
        {   //TO FIND AN ELEMENT WHICH IS SMALLER THAN PIVOT
            j--;
        }

        if(i < j){   //SWAPPING A[i] and A[j]
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i<j);    

    //SWAPPING A[low] and A[j]
    int temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;  //INDEX WHERE ELEMENT IS FINALLY SETTLED
}

void quickSort(int A[], int low, int high){
    int partitionIndex;     //INDEX OF PIVOT AFTER PARTITION

    

    if(low < high){
        partitionIndex = partition(A, low, high);
        printf("Pass : ");
        printArray(A, 10);
        quickSort(A, low, partitionIndex-1);    //SORT LEFT SUB-ARRAY
        quickSort(A, partitionIndex+1, high);  //SORT RIGHT SUB-ARRAY
    }
}

int main(){
    int A[] = {3, 5, 2, 45, 12, 2, 1, 7, 34, 23};
    int n = 10;    //SIZE

    printf("Array before Sorting : \n");
    printArray(A, n);
    printf("\n");

    quickSort(A, 0, n-1);
    printf("\n");
    printf("Array after Quick Sorting : \n");
    printArray(A, n);

    return 0;
}