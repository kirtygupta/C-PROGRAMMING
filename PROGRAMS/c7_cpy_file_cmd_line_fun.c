// Write a program to copy one file to other, use command line arguments.

#include <stdio.h>
//program to copy one file to another
int main()
{
    char ch;
    FILE *fp1, *fp2;

    // Open source file for reading
    fp1 = fopen("source.txt", "r");
    if (fp1 == NULL)
    {
        printf("Error opening source file\n");
        return -1;
    }
    // Open destination file for writing
    fp2 = fopen("destination.txt", "w");
    if (fp2 == NULL)
    {
        printf("Error opening destination file\n");
        fclose(fp1);
        return -1;
    }

    // Copy contents of source file to destination file
    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);

    // Close both files
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully\n");
    return 0;
}
