#include<stdio.h>
void printadd(int a);
int main(){
    int i =34;
    int *j = &i; //j will now store the address of i
    printf("The value of i is %d\n",i);
    printf("The address of i is %u\n",&i);
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",j);
    printf("The address of j is %u\n",&j);
    printf("The value of j is %u\n",*(&j));
    int k = 4;
    printf("The value of k is %d\n",k);
    printadd(k);
    printf("The address of k is %u\n",&k);
    return 0;
}
void printadd(int a){
    printf("The address of a is %u\n",&a);
}