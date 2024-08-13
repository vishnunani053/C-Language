#include <stdio.h>

// Function prototype for fact
int fact(int n);

int main()
{
 int n, res;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Call the fact function and store the result in res
    res = fact(n);

    // Print the result
    printf("Factorial of %d is %d\n", n, res);

    return 0;
}

// Definition of the fact function
 int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
