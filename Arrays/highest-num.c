// #include <stdio.h>

// int main()
// {
//     int arr[] = {10, 33, 52, 14, 22,100, 5, 18, 77, 15, 81, 2, 3};

//     int large = arr[0];

//     for (int i = 0; i < 12; i++)
//     {
//         if (arr[i] > large)
//         {
//             large = arr[i];
//         }
//     }
//     printf("the largest number is %d", large);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[] = {10, 33, 52, 14, 150, 21, 22, 100, 5, 18, 77, 15, 81, 2, 3};
    int large = arr[0];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] > large)
        {
             large = arr[i];
        }
    }
    printf("The largest element is %d", large);
    return 0;
}