// 1. Accessing Array Elements Using Pointer Arithmetic

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to the first element of the array

    // Accessing array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
