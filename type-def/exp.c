
#include <stdio.h>

int main()
{
    typedef int my_int;
    my_int a=5,b=10,c;
    
    c=a+b;
    printf("sum is %d",c);

    return 0;
}

// another exp....

#include <stdio.h>

int main(){
    typedef int Array[5];
    Array x = {100,200,300,400,5000};

    for(int i =0;i<5;i++){
        printf("The array elements are %d \n",x[i]);
    }
    return 0;
}