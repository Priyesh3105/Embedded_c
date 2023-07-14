#include<stdio.h>

//declearing string as character array

int main(){
    char s[6] = "Hello";
    char t[6];
    int i;
    for(i=0; s[i]!= '\0'; i++){
        t[i]=s[i];
    }
    t[i] = '\0';
    printf("%s\n",t);
    char d[] = "the best string in the world, which has ability to transfrom the whole world!";
    printf("%s\n",d);
    int len = sizeof(d)/sizeof(d[0]);
    printf("length of the above array is %d.\n",len);
    return 0;
}