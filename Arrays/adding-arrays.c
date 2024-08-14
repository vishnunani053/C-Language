#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};  // Ensure 'a' is large enough to hold new elements
    int b[] = {100, 200, 300};          // Array to be inserted
    int loc, m, n;

    m = 5;  // Length of array 'a' with initial elements
    n = 3;  // Length of array 'b'

    printf("Enter a location to insert: ");
    scanf("%d", &loc);

    // Check if location is valid
    if (loc < 0 || loc > m)
    {
        printf("Invalid location\n");
        return 1;
    }

    // Shift elements of array 'a' to the right to make space for 'b'
    for (int i = m - 1; i >= loc; i--)
    {
        a[i + n] = a[i];
    }

    // Insert elements of array 'b' into array 'a' at the specified location
    for (int i = 0; i < n; i++)
    {
        a[loc + i] = b[i];
    }

    // Print the final array
    printf("Final array is: ");
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
