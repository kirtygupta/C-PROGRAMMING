#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}

void goodMorning(){
    printf("Good Morning User.\n");
}
void goodAfternoon(){
    printf("Good Afternoon User.\n");
}
void goodNight(){
    printf("Good Night User.\n");
}