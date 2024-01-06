#include<stdio.h>

void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }  
    printf("\n");
}

void insertionSort(int A[], int n){
    //LOOP FOR PASSES
    for (int i = 1; i <= n-1; i++)  //STARTING FROM INDEX 1
    {
        printf("Pass : %d\n", i+1);
        int key = A[i];   //element being inserted to left side array
        int j =i-1;

        //LOOP FOR EACH PASS
        while (j >= 0 && A[j] > key){  //INSERTING IN LEFT SIDE ARRAY
            A[j+1]= A[j];
            j--;
        }        
        A[j+1] = key;
    }
    
}

int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;    //SIZE

    printf("Array before Sorting : \n");
    printArray(A, n);

    insertionSort(A, n);
    printf("Array after Insertion Sorting : \n");
    printArray(A, n);

    return 0;
}

    //-1   0   1     2    3    4    5 
    //    12,| 54,  65,  07,  23,  09 ---->1st pass done
    //    12,| 54,  65,  07,  23,  09 -> i=1; key=54; j=0

    //    12,  54,| 65,  07,  23,  09 -> i=2; key=65; j=1
    //    12,  54,| 65,  07,  23,  09 -> 2nd pass done

    //    12,  54,  65,| 07,  23,  09 -> i=3; key=7; j=2
    //    12,  54,  65,| 65,  23,  09 -> i=2; key=7; j=1
    //    12,  54,  54,| 65,  23,  09 -> i=1; key=7; j=0
    //    12,  12,  54,| 65,  23,  09 -> i=0; key=7; j=-1
    //    07,  12,  54,| 65,  23,  09 ---->A[0]=key i.e A[j+1]
    //    07,  12,  54,  65,| 23,  09 ---->3rd pass done

    //    07,  12,  54,  65,| 23,  09 -> i=4; key=23; j=3
    //    07,  12,  54,  65,| 65,  09 -> i=3; key=23; j=2
    //    07,  12,  54,  54,| 65,  09 -> i=2; key=23; j=1
    //    07,  12,  23,  54,| 65,  09 -> i=1; key=23; j=0
    //    07,  12,  23,  54,| 65,  09 -> i=0; key=23; j=-1
    //    07,  12,  23,  54,| 65,  09 ---->A[0]=key i.e A[j+1]
    //    07,  12,  23,  54,  65,| 09 -> 4th pass done

    //    07,  12,  23,  54,  65,| 09 -> i=5; key=9; j=4
    //    07,  12,  23,  54,  65,| 65 -> i=4; key=9; j=3
    //    07,  12,  23,  54,  54,| 65 -> i=3; key=9; j=2
    //    07,  12,  23,  23,  54,| 65 -> i=2; key=9; j=1
    //    07,  12,  12,  23,  54,| 65 -> i=1; key=9; j=0
    //    07,  09,  12,  23,  54,| 65 -> i=0; key=9; j=-1
    //    07,  09,  12,  23,  54,  65 |-> 5th pass done