#include<stdio.h>

int slice(char *st, int m, int n);

int main(){

    int m,n;
    char st[] = "Kirty";
    printf("Enter the beginning position from where you want to slice : ");
    scanf("%d",&m);
    printf("Enter the ending position till where you want to slice : ");
    scanf("%d",&n);
    slice(st,m,n);  
    printf("Sliced String : %s",st);

    return 0;
}

int slice(char *st, int m, int n){
    int i=0;
    while ((m+i)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
    
}