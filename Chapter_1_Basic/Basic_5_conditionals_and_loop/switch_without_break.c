#include<stdio.h>

int main(){
    for(int i=0; i<20; i++){
        switch (i)
        {
        case 0: i+=1;
        case 1: i+=2;
        case 3: i+=4;
        case 12: i+=1;       
        default: i+=3;
        }

        printf("%d\n",i);
    }
    return 0;
}