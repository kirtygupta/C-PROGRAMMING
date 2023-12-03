#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good Morning User.\n");
    goodAfternoon();
}
void goodAfternoon(){
    printf("Good Afternoon User.\n");
    goodNight();
}
void goodNight(){
    printf("Good Night User.\n");
}