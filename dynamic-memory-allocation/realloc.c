#include <stdio.h>
#include <stdlib.h>

int main()
{
    int capacity=5 , *stack;
   stack =(int*)calloc(capacity , sizeof(int));
   capacity++;
   stack=(void*)realloc(stack,capacity*sizeof(int));
    
    return 0;
}