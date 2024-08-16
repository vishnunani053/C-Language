#include <stdio.h>

void display()
{
    extern int x;
    printf("%d \n", x);

    printf("calling from the  another file");
}