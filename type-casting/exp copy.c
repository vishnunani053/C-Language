#include <stdio.h>

int main()
{

    // implicit type casting;
    int a = 10;
    double b = a;
    printf("%f \n", b);

    // explicit type casting

    int x = 20;
    double y = 6;
    int div = x/y;
    // double div = x / y;

    printf("%f", div);

    return 0;
}