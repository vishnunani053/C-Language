#include <stdio.h>

int main()
{
    printf(" date : %s ",__DATE__);
    printf("\n time : %s "__TIME__);
    printf("\n line : %d",__LINE__);
    printf("\n file: %s",__FILE__);
    printf("\n ansi: %d",__STDC__);
    return 0;
}