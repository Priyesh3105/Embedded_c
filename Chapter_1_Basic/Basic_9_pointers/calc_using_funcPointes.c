#include<stdio.h>
# define ops 4

float sum(float a, float b){return (a+b);}
float sub(float a, float b){return (a-b);}
float mul(float a, float b){return (a*b);}
float div(float a, float b){return (a/b);}

int main(){
    float (*ptr2func[ops])(float, float) = {sum, sub, mul, div};
    int choice;
    float a,b;
    printf("enter choice for compute: 0 for sum, 1 for sub, 2 for mul, 3 for div\n");
    scanf("%d", &choice);
    printf("enter two numbers for compute: \n");
    scanf("%f %f", &a , &b);
    printf("\n%f", ptr2func[choice](a, b));
    return 0;
}