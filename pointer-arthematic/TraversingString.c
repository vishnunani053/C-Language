//2. Pointer Arithmetic for Traversing a String

#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;  // Pointer to the first character of the string

    // Traversing the string using pointer arithmetic
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}

// 3. Difference Between Two Pointers

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int arr[]= {100,200,300,400,500};
	int *ptr1 = &arr[0];
	int *ptr2= &arr[4];

	int difference = ptr2-ptr1;
	printf("%d",difference);

	return 0;
}