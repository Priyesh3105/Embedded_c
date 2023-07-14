#include<stdio.h>
#include<math.h>

int main(){
    int num, val1, val2, count =0;
    printf("enter the number: ");
    scanf("%d", &num);

    val1 = ceil(sqrt(num));
    val2 = num;

    for(int i=2; i<=val1; i++){
        if( val2 % i == 0)
            count++;
    }

    if((count==0 && val2 != 1)|| val2==2 || val2 ==3)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}