#include <stdio.h>

int main()
{

    FILE *fp;
    fp = fopen("C:/Users/Vishn/OneDrive/Desktop/C-Progam/file-handling/test.txt", "r");
    int ch;
    if (fp == NULL)
    {
        printf("file not found");
    }

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    return 0;
}