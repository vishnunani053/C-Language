// #include <stdio.h>

// union un
// {
//     float a;
//     float b;
//     int c;
//     double d;
// };

// int main()
// {
//     union un value;
//     value.a = 10;
//     value.b = 30;
//     value.c=50;
//     value.d=69999.88;
//     printf("b value is = %f \n", value.b);
//     printf("a value is = %f \n", value.a);
//     printf("c value is = %d \n" , value.c);
//     printf("d value is = %lf \n", value.d);
//     printf("union size value is = %ld \n", sizeof(value));

//     return 0;
// }

#include <stdio.h>

union un
{
    float a;
    float b;
    int c;
    double d;
};

int main()
{
    union un value;
    
    value.a = 10.0f;
    printf("a value is = %f \n", value.a);
    
    value.b = 30.0f;
    printf("b value is = %f \n", value.b);
    
    value.c = 50;
    
    printf("c value is = %d \n", value.c); // i want doubt in this line..
    value.d = 69999.88;
    printf("d value is = %lf \n", value.d);

    printf("union size value is = %ld \n", sizeof(value));

    return 0;
}
