// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char x[50] = "vishnu";
//     char y[] = "vardhan";

//     int l1 = strlen(x);
//     int l2 = strlen(y);
//     int i;

//     for (i = 0; i <= l2; i++)
//     {
//         x[l1 + i] = y[i];
//     }
//     printf("%s", x);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{

    char x[50] = "vishnu ";
    char y[] = "vardhan";

    int l1 = strlen(x);
    int l2 = strlen(y);
    for (int i = 0; i <= l2; i++)
    {
        x[l1 + i] = y[i];
    }
    printf("output is %s", x);
    return 0;
}