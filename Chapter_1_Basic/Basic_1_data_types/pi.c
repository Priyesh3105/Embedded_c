
int main(){

    int piINint = 22/7;
    float piINfloat = 22.0/7.0;
    double piINdouble = 22.0/7.0;
    long double piINlongdouble = 22.0/7.0;
    printf("%d is pi in int \n", piINint);
    printf("%.16f is pi in float \n", piINfloat);
    printf("%.16lf is pi in double \n", piINdouble);
    printf("%.21Lf is pi in long double \n", piINlongdouble);
    return 0;
}