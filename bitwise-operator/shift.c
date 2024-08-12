#include <stdio.h>

int main()
{
//     int x;
//     x=-5;

//    unsigned int y = 15;

    // left shift
    // printf("%d",x<<1);
    // printf("%d",x<<2);
    // printf("%d",x<<3);

// right shift

// printf("%d",y>>2);
// printf("%d",y>>2);



//example;

int num = -16; // Binary: 1111 0000 (signed)
unsigned int result = num >> 2; // Right shift by 2
printf("%u\n", result); // Output: Large unsigned value



//example 

signed int num = -4; // Binary: 1111 1100
signed int result = num >> 1; // Right shift by 1
printf("%d\n", result); // Output: -2

return 0;
}