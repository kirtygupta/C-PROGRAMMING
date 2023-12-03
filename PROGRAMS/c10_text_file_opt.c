//Write a program to count the no of Lowercase, Uppercase characters and 
// special Characters presents in the contents of text File.

#include <stdio.h>
#include <ctype.h>
//count lowercase ,uppercase,special characters in a text file
//text file contains "Hi! I am Kirty , currenlty pursuing B.Tech ."
int count_lower(char *filename) {
    int count = 0;
    char c;
    FILE *fp;
    fp = fopen("c10_text_file_opt.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return -1;
    }
    while ((c = getc(fp)) != EOF) {
        if (islower(c))
            count++;
    }
    fclose(fp);
    return count;
}

int count_upper(char *filename) {
    int count = 0;
    char c;
    FILE *fp;
    fp = fopen("c10_text_file_opt.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return -1;
    }
    while ((c = getc(fp)) != EOF) {
        if (isupper(c))
            count++;
    }
    fclose(fp);
    return count;
}

int count_special(char *filename) {
    int count = 0;
    char c;
    FILE *fp;
    fp = fopen("c10_text_file_opt.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return -1;
    }
    while ((c = getc(fp)) != EOF) {
        if (!isalnum(c))
            count++;
    }
    fclose(fp);
    return count;
}

int main() {
    char *filename = "text.txt";
    int lower = count_lower(filename);
    int upper = count_upper(filename);
    int special = count_special(filename);
    printf("Lowercase characters: %d\n", lower);
    printf("Uppercase characters: %d\n", upper);
    printf("Special characters: %d\n", special);
    return 0;
}
