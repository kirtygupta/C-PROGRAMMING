#include<stdio.h>
#include<stdlib.h>
#include<limits.h> // For INT_MAX

void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }  
    printf("\n");
}

int maximum(int A[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max < A[i]){
            max = A[i];
        }
    }
    return max;
}

void countSort(int A[], int n){
    int i,j;
    //FIND THE MAXIMUM ELEMENT IN A
    int max = maximum(A, n);
    // COUNT ARRAY WHICH IS DYNAMICALLY ALLOCATED
    int * count = (int *)malloc((max+1)*sizeof(int));
    //INITIALIZING THE ARRAY COUNT WITH 0
    for (i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    //INCREMENT THE CORRESPONDING INDEX IN THE COUNT ARRAY
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]]+1;
    }
    i = 0;  //COUNTER FOR COUNT ARRAY
    j = 0;  //COUNTER FOR GIVEN ARRAY A
    
    while (i <= max)
    {
        if (count[i]>0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;    //count[i]=0
        }
    }
    
}

int main(){
    int A[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;    //SIZE

    printf("Array before Sorting : \n");
    printArray(A, n);

    countSort(A, n);
    printf("Array after Merge Sorting : \n");
    printArray(A, n);

    return 0;
}
