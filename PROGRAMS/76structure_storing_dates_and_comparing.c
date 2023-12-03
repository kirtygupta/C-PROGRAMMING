#include<stdio.h>

typedef struct date{
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("%d/%d/%d.\n", d.date, d.month, d.year); 
}

// COMPARING THE DATES:

int dateCmp(date d1, date d2){
    //MAKING DESCISION ON THE BASIS OF YEAR COMPARISON
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }

    //MAKING DESCISION ON THE BASIS OF MONTH COMPARISON
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    
    //MAKING DESCISION ON THE BASIS OF DATE COMPARISON
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    return 0;
}

int main(){
    date d1 = {21, 12, 22};
    date d2 = {14, 11, 23};
    printf("Date 1 is : ");
    display(d1);
    printf("Date 2 is : ");
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Date comparison function returns : %d", a); //-1 becpz 1st date is small here.
    return 0;
}