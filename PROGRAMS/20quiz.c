//TO PRINT NATURAL NUMBERS FROM 10-20 WHEN INITIAL LOOP COUNTER i IS INITIALIZED TO 0.
#include<stdio.h>
int main(){
    int i=0;
    while(i<=20){
        if(i>=10){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}