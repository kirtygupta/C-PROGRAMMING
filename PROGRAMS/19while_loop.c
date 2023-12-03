#include<stdio.h>
int main(){
    // LOOPS ARE USED TO REPEAT SIMILAR PART OF CODE SNIPPET EFFICIENTLY.
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    while(a<10){
        printf("%d\n",a);
        a++;
    }
    return 0;
}