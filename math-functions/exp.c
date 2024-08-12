#include <stdio.h>
#include <math.h>

int main()
{
    double a = sqrt(9);
    printf("a = %f \n", a);  // Corrected to use %f for double

    double b = pow(2, 5); // 2 is base value and 5 is exponential value
    printf("b = %f \n", b);  // Corrected to use %f for double

    double c = ceil(3.24524852); // it rounds up the value to the next whole number
    printf("c = %f \n", c);  // Corrected to use %f for double

    double d = floor(3.254588);  // it rounds down the value to the previous whole number
    printf("d = %f \n", d);  // Corrected to use %f for double

    double e = round(3.2); // rounds the nearst value o/p=3
    // double e = round(3.5);  // o/p =4
    // double e = round(3.815); // o/p = 4
    printf("e= %f \n",e);

    double f = fabs(-150); //The fabs function returns the absolute value of the input x. This means it returns x if x is positive or zero, and -x if x is negative.
    printf("f= %f \n",f);

    double g = log(10);
    printf("g= %f \n",g);

    double h=sin(30);
        printf("h= %f \n",h);


    return 0;
}
