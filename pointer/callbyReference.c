// #include <stdio.h>
// void swap(int*, int*);
// void main()
// {
//     int a = 10,b = 20;
//     printf("The a and b values are : %d \t %d \n", a, b);
//     swap(&a, &b);
//         printf("The a and b values are : %d \t %d \n", a, b);

// }

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     printf("After swapping the values are  %d \t %d \n", *x, *y);
// }

#include <stdio.h>
void swap(int *, int *);
void main()
{
    int a = 10, b = 20;
    printf("The a and b values are : %d \t %d \n", a, b);
    swap(&a, &b);
    printf("The a and b values  in main  after swap are : %d \t %d \n", a, b);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("The a and b values after swap are : %d \t %d \n", *x, *y);
}