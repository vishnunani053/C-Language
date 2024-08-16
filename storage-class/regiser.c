// print sum of n numbers;

#include <stdio.h>

int main()
{

  register int i;
  double n, sum = 0;

    printf("Enter a number: ");
    scanf("%lf",&n);
    for(i=0;i<=n;i++){
       sum=sum+i;
    }
  printf("The sum is : %lf",sum);
    return 0; 
}