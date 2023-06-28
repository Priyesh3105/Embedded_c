#include <stdio.h>

// Uncomment the following line to enable debug mode
//#define DEBUG_MODE

int main() {
#ifdef DEBUG_MODE
    printf("Debug mode is enabled.\n");
#else
    #error Debug mode is not enabled. Please enable it to proceed.
#endif

    return 0;
}
