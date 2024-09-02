// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int a,b,sum1,sum2;
//     float m,n ,sub1,sub2;
//     // printf("Enter two integers: ");
//     scanf("%d %d" , &a,&b);
//     // printf("Enter two decimals: ");
//     scanf("%f %f",&m,&n);
//     sum1 = a+b;
//     sum2=m+n;
//     sub1=a-b;
//     sub2=m-n;
//     printf("%d %d \n",sum1,sum2);
//     printf("%.1f %.1f",sub1,sub2);
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
      
    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    printf("%d %d \n",a+b ,a-b);
    printf("%0.1f %0.1f \n",c+d,c-d);
    return 0;
}