// #include <stdio.h>

// void modifyValue(int *x);

// int main()
// {
//     int a = 10;
//     printf("before value %d \n", a);
//     modifyValue(&a);
//     printf("after value %d", a);

//     return 0;
// }

// void modifyValue(int *x)
// {
//     *x = 200;
// }

// 2. Call by Reference Example
//  In call by reference, the address of the actual parameter is passed to the function. Changes made to the parameter inside the function affect the original argument.

#include <stdio.h>

void modifyValue(int *x);

int main()
{

    int a = 10;
    printf("before a value is: %d \n", a);

    modifyValue(&a);
    printf("after a value is: %d", a);

    return 0;
}

void modifyValue(int *x)
{
    *x = 50;
}
