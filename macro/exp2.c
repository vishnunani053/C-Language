
// #include <stdio.h>
// #define MAX(a, b)                        \
//     if (a > b)                           \
//         printf("%d is max value \n", a); \
//     else                                 \
//         printf("%d is max value", b);

// int main()
// {
//     MAX(30, 20);
// #undef MAX
//     MAX(30, 80);
//     return 0;
// }

#include <stdio.h>
# define MAX if(a>b)\
              printf("%d is  max",a)\
              else

int main()
{
    return 0;
}