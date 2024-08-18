// #include <stdio.h>

// struct Emp
// {
//     int eno;
//     char ename[20];
//     float esal;
// };

// void main()
// {
//     char *esp;
//     int *enp;
//     struct Emp *sep;

//     printf("The size of *char is %d  \n",sizeof(esp));
//     printf("The size of *int is %d \n",sizeof(enp));
//     printf("The size of *struct emp is %d \n",sizeof(sep));
// }

#include <stdio.h>

struct Emp
{
    int eno;
    char ename[20];
    float esal;
    double eph;
};

void main()
{
    char *cp;
    int *ip;
    double *dp;
    struct Emp *sep;

    printf("The size of *int pointer is %d  bytes\n", sizeof(ip));
    printf("The size of *char pointer is %d bytes\n", sizeof(cp));
    printf("The size of *sep pointer is %d bytes\n", sizeof(sep));
    printf("The size of *double pointer is %d bytes\n", sizeof(dp));
    printf("The size of *double pointer is %d bytes\n", sizeof(dp));
    // printf("The size of *sep pointer is %d bytes\n", sizeof(*sep));
}