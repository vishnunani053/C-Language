#include <stdio.h>
#include <math.h>

int main()
{
    double num,res;
    printf("Enter a number: ");
    scanf("%lf",&num);
    res=sqrt(num);
    printf("sqrt of %lf is %lf : ",num,res);
    return 0;
}