#include <stdio.h>

struct Emp{
    int i;
    char name[20];
    float sal;
};

int main()
{
    struct Emp e;
    printf("The size of emp is :%d \n",sizeof(e));
    printf("The size of emp is :%d",sizeof(struct Emp));
    return 0;
}