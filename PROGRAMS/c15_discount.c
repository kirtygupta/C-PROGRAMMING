// 10% discount is given, when a customer buys more than 100 items. Item cost will be entered 
//by the user. Write a program to calculate the final cost that has to be paid. 

#include <stdio.h>
int main() {
    int quantity;
    float mrp, cost;
    printf("Enter Price of the item : ");
    scanf("%f", &mrp);
    printf("Enter Quantity of the item : ");
    scanf("%d", &quantity);

    cost = mrp * quantity;
    if(quantity>100) {
        cost -= (cost/10);
    }
    printf("Final Cost to Pay for %d item(s) : %f", quantity, cost);
    return 0;
}