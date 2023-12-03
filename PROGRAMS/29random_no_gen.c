// RANDOM NUMBER GENERATOR BETWEEN 1-100
#include<stdio.h>
#include<stdlib.h>  // to import rand()
#include<time.h>

int main(){
    int number;
    srand(time(0));    // Initialising rand()    // (time(0)) - returns time in seconds
    // To get the generated random number between 1-100 we find remainder and add 1.
    number = rand() % 100 + 1;   // Generates a random number
    printf("The number is %d.", number);
    // Keep running the loop until the number is guessed.
    return 0;

}