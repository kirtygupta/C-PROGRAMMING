// PROJECT
// SNAKE, WATER, GUN  || ROCK, PAPER, SCISSOR

#include<stdio.h>
#include <stdlib.h> 
#include <time.h>

int snakeWaterGun(char user_input, char comp_input){
    // Returns -1 if you lose, 1 if you win, and 0 if draw.
    // CASES COVERED: {SS,WW,GG,SW,WS,SG,GS,GW,WG}

    //CASE 1
    if(user_input==comp_input){
        return 0; //Match draw
    }
    //CASE 2
    if(user_input=='s' && comp_input=='w'){
        return 1; //You win
    }
    else if(user_input=='w' && comp_input=='s'){
        return -1; // Computer wins
    }
    //CASE 3
    if(user_input=='s' && comp_input=='g'){
        return -1; //Computer wins
    }
    else if(user_input=='g' && comp_input=='s'){
        return 1; //You win
    }
    //CASE 4
    if(user_input=='g' && comp_input=='w'){
        return -1; //Computer wins
    }
    else if(user_input=='w' && comp_input=='g'){
        return 1; //You win
    }
    
}

int main(){
    int play_again = 1;
    char user_input, comp_input;
    int u_count=0, c_count=0, number;
    while(play_again){

        srand(time(0)); 
        number = rand() % 100 + 1; // Generates a random number between 1 to 100
        if(number<33){
            comp_input = 's';
        }
        else if(number>33 && number<66){
            comp_input = 'w';
        }
        else{
            comp_input = 'g';
        }

        printf("Enter 's' for snake, 'w' for water, 'g' for gun : ");
        scanf("%c", &user_input);

        printf("You chose: %c and computer chose: %c\n",user_input,comp_input);

        
        int result = snakeWaterGun(user_input, comp_input);
        if(result==0){
        printf("Game Draw!!\n");
        }
        else if(result==1){
            u_count++;
            printf("You won!!\n");
        }
        else{
            c_count++;
            printf("Computer won!!\n");
        }
    
        printf("\nFINAL SCORE : \n");
        printf("User Score: %d  ||  Computer Score: %d\n", u_count,c_count);

        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &play_again);
        fflush(stdin); // Clear the input buffer
    }

    return 0;
}