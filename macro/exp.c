//use capital letters to declare the macros

#include <stdio.h>
#define MUL(a,b)  a*b
#define ADD(c,d) c+d
#define DIV(g,h) g/h


int main()
{
    printf("%d \n",ADD(3,4)); 
    printf("%d \n",MUL(10,5));
    printf("%d",DIV(10+5,5-2));
    return 0;
}