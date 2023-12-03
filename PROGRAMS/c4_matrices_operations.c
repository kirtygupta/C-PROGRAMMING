/*Write a menu driven program for matrices to do the following operations depending on whether the operations require one or two matrices :
•	Addition of 2 Matrices
•	Subtraction of 2 Matrices
•	Finding upper and lower triangular Matrices
•	Transpose of a Matrix
•	Product of 2 Matrices
*/
#include <stdio.h>

void sum();
void minus();
void upper();
void lower();
void transpose();
void multiply();

int main() {
    int option;
    int opt;
    printf("Enter operation to perform\n"
    "1 - Addition\n"
    "2 - Subtraction\n"
    "3 - Upper Triangular Matrix\n"
    "4 - Lower Triangular Matrix\n"
    "5 - Transpose\n"
    "6 - Multiplication\n"
    "7 - Exit\n"
    "(1,2,3,4,5,6,7) : ");
    scanf("%d", &option);
    switch (option) {
    case 1:
        sum();
        break;
    case 2:
        minus();
        break;
    case 3:
        upper();
        break;
    case 4:
        lower();
        break;
    case 5:
        transpose();
        break;
    case 6:
        multiply();
        break;
    case 7:
        printf("Exiting...");
        return 0;
        break;
        
    default:
        printf("Invalid Input.");
        break;
    }
    printf("\nWould you like to run the program once again? (type 1 for yes or 0 for no) : ");
    scanf("%d", &opt);
    switch (opt) {
    case 1:
        main();
        break;
    case 0:
        printf("Exiting...");
        return 0;
        break;
    default:
        printf("Invalid Input.");
        break;
    }
    return 0;
}

void sum() {
    int k, i, j, row, column;
    printf("Enter Array Size.\n");
    printf("Number of Rows : ");
    scanf("%d", &row);
    printf("Number of Columns : ");
    scanf("%d", &column);

    int arr1[row][column];
    int arr2[row][column];

    for(k=1; k<3; k++){
        printf("Enter Array %d\n", k);
        for(i=0; i<row; i++) {
            for(j=0; j<column; j++) {
                printf("Enter Row %d - column %d : ", i+1, j+1);
                if(k==1) {
                    scanf("%d", &arr1[i][j]);
                } else{
                    scanf("%d", &arr2[i][j]);
                }
            }
        }
    }
    int SUM[row][column];
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++){
            SUM[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++) {
            printf("%d ", SUM[i][j]);
        }
        printf("\n");
    }
}

void minus() {
    int k, i, j, row, column;
    printf("Enter Array Size.\n");
    printf("Number of Rows : ");
    scanf("%d", &row);
    printf("Number of Columns : ");
    scanf("%d", &column);

    int arr1[row][column];
    int arr2[row][column];

    for(k=1; k<3; k++){
        printf("Enter Array %d\n", k);
        for(i=0; i<row; i++) {
            for(j=0; j<column; j++) {
                printf("Enter Row %d - column %d : ", i+1, j+1);
                if(k==1) {
                    scanf("%d", &arr1[i][j]);
                } else{
                    scanf("%d", &arr2[i][j]);
                }
            }
        }
    }
    int MINUS[row][column];
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++){
            MINUS[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++) {
            printf("%d ", MINUS[i][j]);
        }
        printf("\n");
    }
}

void upper() {
    int k, i, j, row, column;
    printf("Enter Array Size.\n");
    printf("Number of Rows : ");
    scanf("%d", &row);
    printf("Number of Columns : ");
    scanf("%d", &column);

    int arr[row][column];
    printf("Enter Array \n");
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++) {
            printf("Enter Row %d - column %d : ", i+1, j+1);
            scanf("%d", &arr[i][j]);   
        }
    }
    int UPP[row][column];
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++){
            if(i>j) {
                UPP[i][j] = 0;
            } else {
                UPP[i][j] = arr[i][j];
            }
        }
    }
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++) {
            printf("%d ", UPP[i][j]);
        }
        printf("\n");
    }
}

void lower() {
    int k, i, j, row, column;
    printf("Enter Array Size.\n");
    printf("Number of Rows : ");
    scanf("%d", &row);
    printf("Number of Columns : ");
    scanf("%d", &column);

    int arr[row][column];
    printf("Enter Array \n");
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++) {
            printf("Enter Row %d - column %d : ", i+1, j+1);
            scanf("%d", &arr[i][j]);   
        }
    }
    int LOW[row][column];
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++){
            if(i<j) {
                LOW[i][j] = 0;
            } else {
                LOW[i][j] = arr[i][j];
            }
        }
    }
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++) {
            printf("%d ", LOW[i][j]);
        }
        printf("\n");
    }
}

void transpose() {
    int k, i, j, row, column;
    printf("Enter Array Size.\n");
    printf("Number of Rows : ");
    scanf("%d", &row);
    printf("Number of Columns : ");
    scanf("%d", &column);

    int arr[row][column];
    printf("Enter Array \n");
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++) {
            printf("Enter Row %d - column %d : ", i+1, j+1);
            scanf("%d", &arr[i][j]);   
        }
    }
    int TRANS[column][row];
    for(i=0; i<row; i++) {
        for(j=0; j<column; j++){
            TRANS[j][i] = arr[i][j];
        }
    }
    for(i=0; i<column; i++) {
        for(j=0; j<row; j++) {
            printf("%d ", TRANS[i][j]);
        }
        printf("\n");
    }
}

void multiply() {
    int k, i, j, row1, column1, row2, column2;
    printf("Enter Array 1 Size.\n");
    printf("Number of Rows : ");
    scanf("%d", &row1);
    printf("Number of Columns : ");
    scanf("%d", &column1);

    printf("Enter Array 2 Size.\n");
    printf("Number of Rows : ");
    scanf("%d", &row2);
    printf("Number of Columns : ");
    scanf("%d", &column2);

    int arr1[row1][column1];
    int arr2[row2][column2];

    printf("Enter Array 1 \n");
    for(i=0; i<row1; i++) {
        for(j=0; j<column1; j++) {
            printf("Enter Row %d - column %d : ", i+1, j+1);
            scanf("%d", &arr1[i][j]);   
        }
    }
    printf("Enter Array 2 \n");
    for(i=0; i<row2; i++) {
        for(j=0; j<column2; j++) {
            printf("Enter Row %d - column %d : ", i+1, j+1);
            scanf("%d", &arr2[i][j]);   
        }
    }
    if(column1 == row2) {
        int MULTI[row1][column2];
        for(i=0; i<row1; i++) {
            for(j=0; j<column2; j++){
                MULTI[i][j] = 0;
                for(k=0; k<column1; k++) {
                    MULTI[i][j] = MULTI[i][j] + arr1[i][k] * arr2[k][j];
                }
            }
        }
        
        for(i=0; i<row1; i++) {
            for(j=0; j<column2; j++) {
                printf("%d ", MULTI[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrices multiplication not possible.");
    }
}
