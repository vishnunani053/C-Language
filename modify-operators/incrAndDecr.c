// we need five steps to these types of problems

// 1 pre increment and pre decrement
// 2 substitution
// 3 Evaluation
// 4 assignment
// 5 post increment and post decrement




#include <stdio.h>

int main(){
    int x = 30,y=20;
    int z = x++ + --y;
    printf("%d",z);
    return 0;
}