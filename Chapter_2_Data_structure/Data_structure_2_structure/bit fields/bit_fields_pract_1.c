#include <stdio.h>
#include <string.h>

/* define simple structure */
struct {
    unsigned int redFlag;
    unsigned int greeFlag;
} flagStatus1;

/* define a structure with bit fields */
struct {
    unsigned int redFlag : 1;
    unsigned int greeFlag : 1;
} flagStatus2;

int main( )
{

    printf( "Memory size occupied by flagStatus1 : %d\n", sizeof(flagStatus1));
    printf( "Memory size occupied by flagStatus2 : %d\n", sizeof(flagStatus2));

    return 0;
}