
#include <stdio.h>

int add(int a,int b);

int main()
{
    int num1,num2,sum;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    sum=add(num1,num2);
    printf("The sum of %d and %d is %d",num1,num2,sum);
    
    return 0;
}
int add(int a,int b)
{
    return a+b;
}