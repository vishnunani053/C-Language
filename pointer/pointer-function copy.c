#include <stdio.h>

int add(int, int);
int multiply(int, int, int);

void main()
{
    int r1, r2, r3;
    r1 = add(10, 20);
    r2 = multiply(10, 20, 30);
    printf("The sum is %d \n", r1);
    printf("The product is %d \n", r2);

    int (*ptr)(int, int);
    ptr = &add;
    r3 = ptr(20, 50);
    printf("The sum is %d", r3);
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int multiply(int a, int b, int c)
{
    int d = a * b * c;
    return d;
}