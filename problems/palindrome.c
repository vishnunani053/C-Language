#include <stdio.h>

int main()
{
    char str[50];
    int i;
    printf("Enter a value: ");
    scanf("%s", str);
    int j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("The string is not a palindrome. \n");
            return 0;
        }
        i++;
        j--;
    }
    printf("The string is palindrome");
    return 0;
}