#include<stdio.h>
#include <stdlib.h>

//Initialise each memory block with a default value of 0.

int main(){
    int n;
    int *ptr;
    
    printf("How many intergers do you want to enter?\n");
    scanf("%d",&n);
    
    ptr = (int *)calloc(n,sizeof(int));

    for(int i=0; i<n; i++){
        printf("Enter the value of %d element is : ",i+1);
        scanf("%d", &ptr[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("The value of %d element is : %d.\n",i+1, ptr[i]);
    }
    return 0;
}