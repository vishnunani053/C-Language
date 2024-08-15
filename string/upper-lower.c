#include <stdio.h>

int main()
{
    char x[] = "VisHnu@&HellO";
    int i = 0;
    while (x[i] != 0)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] = x[i] + 32;
        }
        i++;
    }
    printf("%s", x);

    return 0;
}