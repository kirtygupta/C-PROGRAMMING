//CHECK WILL PASS OR FAIL ACC.
#include<stdio.h>

int main(){
    
    int physics, chemistry, maths;
    float total;
    printf("Enter physics number : ");
    scanf("%d",&physics);
    printf("Enter chemistry number : ");
    scanf("%d",&chemistry);
    printf("Enter maths number : ");
    scanf("%d",&maths);
    total = (physics + chemistry + maths)/3;
    if((total<40)||physics<33||chemistry<33||maths<33){
        printf("Your total percentage is %f and you have failed.\n",total);
    }
    else{
        printf("Your total percentage is %f and you have passed.\n",total);
    }

    return 0;
}