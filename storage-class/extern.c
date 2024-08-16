#include <stdio.h>

void fun1();
void fun2();

int main()
{
    extern globalValue;
    fun1();
    fun2();
    printf("globalValue=%d", globalValue);
    return 0;
}

void fun1()
{
    int a = 10;
    printf("a=%d \n", a);
}
void fun2()
{
    printf("printing fun 2 \n");
}
 globalValue = 20;
