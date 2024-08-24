#include <stdio.h>

// Local structures;


void check(struct Local l);
int main()
struct Local
{
    int a, b;
};
{

    struct Local l;
    l.a = 20;
    l.b = 30;

    printf("The value is %d \n", l.a);
    check(l);

    return 0;
}

void check(struct Local l)
{

    printf("The value is %d ", l.b);
}

