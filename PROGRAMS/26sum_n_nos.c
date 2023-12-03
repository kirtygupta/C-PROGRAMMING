#include<stdio.h>
int main(){
    int i, sum=0, n;
    printf("Enter number till you want to sum : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum += i;
    }
    printf("The value of sum is %d.",sum);

    return 0;
}

// OR

#include<stdio.h>
int main(){
    int i=1, sum=0, n;
    printf("Enter number till you want to sum : ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum += i;
        i++;
    }
    
    printf("The value of sum is %d.",sum);

    return 0;
}