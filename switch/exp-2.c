#include <stdio.h>

int main()
{
    int x = 5;
    switch (x)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    default:
        printf("Value does not match any case\n");
        break;
    }

    return 0;
}