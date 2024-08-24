#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("C:/Users/Vishn/OneDrive/Desktop/C-Progam/file-handling/test.txt", "r");
    int ch;
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);  // Don't forget to close the file after reading
    return 0;
}
