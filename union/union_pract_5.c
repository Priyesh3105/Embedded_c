#include<stdio.h>
#pragma pack(1)

struct store{
    double price;
    union{
        struct{
            char *title;
            char *author;
            int num_pages;
        }book;

        struct{
            int color;
            int size;
            char *design;
        }shirt;
    }item;
}store1;

struct dukan{
    double price;
    char *title;
    char *author;
    int num_pages;
    int color;
    int size;
    char *design;
}store2;

int main(){
    printf("%d\n", sizeof(store1));
    printf("%d\n", sizeof(store2));
}