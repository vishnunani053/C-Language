
#include <stdio.h>
 void check();
  
 int a=20;
int main()
{
   auto int a = 10;
   {
     auto  int a;
       printf("%d \n",a);
   }
printf("%d \n",a);
check();
    return 0;
}
void check()
{
    printf("%d",a);
    
}