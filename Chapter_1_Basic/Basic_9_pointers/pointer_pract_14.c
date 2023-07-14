#include <stdio.h>

//traversing two d array using pointers

int main() {
    int a[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    

    printf("%d\n", *(*(*(a + 1) +1) + 1));

    unsigned int x[4][3] ={
        {1,2,3},{4,5,6},{7,8,9},{0,0,0}
    };

    printf("%u %u %u", x+3,*(x+3), *(x+2)+3 );

    return 0;
}
