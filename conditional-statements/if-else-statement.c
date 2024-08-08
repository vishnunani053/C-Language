// WAP to check the number even or odd

#include <stdio.h>

int main()
{

    int num;

    printf("Enter a number:");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("%d is a even number",num);
    }else{
        printf("%d is odd number",num);
    }
    return 0;
}