#include <stdio.h>

// Global structure
struct Local
{
    int a, b;
};

// Function prototype
int check(struct Local);

int main()
{
    struct Local l;
    l.a = 20;
    l.b = 30;

    printf("The value is %d \n", l.a);
    check(l);

    return 0;
}

int check(struct Local nani)
{
    int c = nani.a + nani.b;
    printf("The value is %d \n", c);
    return c;
}
