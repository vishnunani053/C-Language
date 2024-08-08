#include <stdio.h>

int main() {
    int a = 2, b = 3;
    int c=a+b;

    // First operation
    b = a++ + b--;  // b = 2 + 3, then a becomes 3 and b becomes 2
    printf("%d %d\n", a, b);  // Outputs: 3 5

    // Second operation
    a = a-- + --b;  // a = 3 + 4, then a becomes 2 and b becomes 4
    printf("%d %d\n", a, b);  // Outputs: 2 4

    // Third operation
    b = ++a + --b;  // b = 3 + 3, a becomes 3 and b becomes 6
    printf("%d %d\n", a, b);  // Outputs: 3 6
    printf("%d",c);

    return 0;
}
