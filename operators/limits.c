#include <stdio.h>
#include <limits.h>

int main()
{
    // Signed short limits
    printf("signed short min value: %d \n", SHRT_MIN);
    printf("signed short max value: %d \n", SHRT_MAX); 
    printf("unsigned short max value: %u \n\n", USHRT_MAX); 
    
    // Signed int limits
    printf("signed int min value: %d \n", INT_MIN); 
    printf("signed int max value: %d \n", INT_MAX); 
    printf("unsigned int max value: %u \n\n", UINT_MAX); 
    
    // Signed long limits
    printf("signed long min value: %ld \n", LONG_MIN); 
    printf("signed long max value: %ld \n", LONG_MAX); 
    printf("unsigned long max value: %lu \n\n", ULONG_MAX); 
    
    // Signed char limits
    printf("signed char min value: %d \n", CHAR_MIN); 
    printf("signed char max value: %d \n", CHAR_MAX); 
    printf("unsigned char max value: %u \n\n", UCHAR_MAX); 
    
    return 0;
}
