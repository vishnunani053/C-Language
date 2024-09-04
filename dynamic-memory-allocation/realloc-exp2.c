#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 5, *stack;
    
    stack = (int*)calloc(capacity, sizeof(int));
    if (stack == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    // Increase capacity
    capacity++;
    // Attempt to reallocate memory
    stack = (void*)realloc(stack, capacity * sizeof(int));
    
    // If realloc fails, stack will be NULL, and previous memory will be leaked
    if (stack == NULL) {
        printf("Memory reallocation failed!\n");
        // Memory leak here because the original `stack` is lost.
    }
    
    // No free(stack);, so memory is leaked even if realloc succeeds
    return 0;
}
