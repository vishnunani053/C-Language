#include <stdio.h>

void main()
{
    int i = 20;
    char ch = 'd';
    float f = 2.46;

    char *chp = &ch;
    int *ip = &i;
    float *fp = &f;

    //  int *ip;
    //  char *chp;
    //  float *fp;

    printf("The int pointer size is %d \n", ip);
    printf("The char pointer size is %d \n", chp);
    printf("The float pointer size is %d \n", fp);
}