#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of array elements is %d",sum);
    return 0;
}