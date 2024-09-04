//     #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, *arr;

//     printf("Enter the size of array: ");
//     scanf("%d", &n);

//     arr = (int*)calloc(n, sizeof(int));
//     if (arr == NULL)
//     {
//         printf("No memory space\n");
//         return 1;
//     }

//     printf("The memory addresses of the array elements are:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%p ", (void*)(arr + i));
//     }
//     printf("\n");

//     // Freeing the allocated memory
//     free(arr);

//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, *arr;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("No memory space\n");
        return;  // Use 'return' to exit the function if memory allocation fails
    }

    printf("The memory addresses of the array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%p ", (void*)(arr + i));  // Correctly print the memory address
    }
    printf("\n");

    free(arr);  // Free the allocated memory
}
