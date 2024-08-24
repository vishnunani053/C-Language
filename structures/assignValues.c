#include <stdio.h>

int main()
{
    struct Emp
    {
        int eid;
        char eName[20];
        float eSal;

    };
    
    struct Emp e={101,"vishnu",20000.25};
    printf("The emp id is = %d \n",e.eid);
    printf("The emp name is = %s \n",e.eName);
    printf("The emp salary is = %f \n",e.eSal);

     return 0;
}