#include <stdio.h>
#include <string.h>

int main()
{

    char x[] = "vishnu";
    int i = 0;
    int j = strlen(x) - 1;

    while (i < j)
    {
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++;
        j--;
    }
printf("the reverse value is %s",x);
    return 0;
}