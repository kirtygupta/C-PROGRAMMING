// PROJECT
// NUMBER GUESSING GAME
// RANDOM NUMBER GENERATOR
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
    int number;
    int guess, nguesses=1;
    srand(time(0)); 
    number = rand() % 100 + 1; // Generates a random number between 1 to 100
    // printf("The number is %d.\n", number);     //  ----->> TO KNOW THE ANSWER
    // Keep running the loop until the number is guessed.
    do
    {
        printf("Guess the number between 1 to 100 : ");
        scanf("%d", &guess);
        if (guess > number){
            printf("Lower number please!\n");
        }
        else if (guess < number){
            printf("Higher number please!\n");
        }
        else {
            printf("You guessed it right in %d attempts.\n",nguesses);
        }

        nguesses++;

    } while (guess!=number);
    
    return 0;
}