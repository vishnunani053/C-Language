#include <stdio.h>

int main()
{
    int i, a, b, cube, sum = 0;
    printf("Enter the startin number: ");
    scanf("%d", &a);
    printf("Enter the ending number:");
    scanf("%d", &b);
    for (i = a; i <= b; i++)
    {
        cube = i * i * i;
        sum += cube;
    }
    printf("The output is :", sum);
    return 0;
}