#include <stdio.h>

int main(){
    int two =2 , three = 3, six =6;
    int result = (two + three) * six / three;
    printf("there is an antoher way of solving this same problem: (%d + %d)*%d/%d = %d \n ",two,three,six,three, result);
    printf("%d is the answer of above method",result);
    return 0;
}