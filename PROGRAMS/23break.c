#include<stdio.h>
int main(){
    int i=0;
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    do{
        printf("The value of i is %d\n",i+1);
        if(i==4){
            break;
        }
        i++;
    }while(i<n);
    return 0;
}