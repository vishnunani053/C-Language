#include <stdio.h>

int sum(int, int);
int multiply(int, int, int);

void main()
{
    int r1, r2, r3;
    r1 = sum(10, 20);
    r2 = multiply(2, 3, 4);
    printf("The sum is %d \n", r1);
    printf("The product is %d \n", r2);

    int (*ptr)(int, int);
    ptr = &sum;
    r3 = ptr(50, 70);
    printf("The sum is %d \n", r3);
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int multiply(int a, int b, int c)
{
    int d = a * b * c;
    return d;
}