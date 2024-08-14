#include <stdio.h>

int main()
{
    int a[30];
    int i, m, key, loc;

    // Input array length
    printf("Enter the array length: ");
    scanf("%d", &m);

    // Input array values
    printf("Enter %d values: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // Input the element to insert
    printf("Enter an element to insert: ");
    scanf("%d", &key);

    // Input the location to insert the element
    printf("Enter the location to insert (0 to %d): ", m);
    scanf("%d", &loc);

    // Check if location is valid
    if (loc < 0 || loc > m) {
        printf("Invalid location.\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = m; i > loc; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new element at the specified location
    a[loc] = key;

    // Print the final array
    printf("The final array is: ");
    for (i = 0; i <= m; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
