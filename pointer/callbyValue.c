#include <stdio.h>
void swap(int x, int y);

void main()
{
    int a = 10, b = 20;
    printf("The a and b values are : %d \t %d \n", a, b);
    swap(a, b);
    // printf("After swapping the values are %d \t %d", x, y);
        printf("The a and b values in main  are : %d \t %d \n", a, b);

}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping the values are  %d \t %d \n", x, y);
}