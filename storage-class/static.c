// #include <stdio.h>

// void fun();
// int main()
// {
//     fun();
//     fun();
//     fun();
//     return 0;
// }

// void fun()
// {
//    static int a = 5;
//     printf("%d \n", a += 2);
// }

#include <stdio.h>

void display();
int main()
{

    for (int i = 0; i < 3; i++)
    {
        display();
    }
    return 0;
}

void display()
{
    static int x = 5;
    int y = 5;
    x++;
    y++;
    printf("x= %d \n", x);
    printf("y= %d \n", y);
}