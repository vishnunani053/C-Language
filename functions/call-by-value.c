
// 1. Call by Value Example
// In call by value, a copy of the actual parameter is passed to the function. Changes made to the parameter inside the function do not affect the original argument.

#include <stdio.h>

void modifyValue(int x);

int main()
{

    int a = 10;
    printf("before value changed %d \n", a);
    modifyValue(10);
    printf("after value change %d", a);

    return 0;
}

void modifyValue(int x)
{
    x = 200;
}
