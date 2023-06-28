#include <stdio.h>
#include <string.h>

//kabbaddi team member are always seven so using bit feilds concept to save their number

struct {
   unsigned int member : 3;
} team;

int main( ) {

   team.member = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(team) );
   printf( "team.member : %d\n", team.member );

   team.member = 7;
   printf( "team.member : %d\n",team.member );

   team.member = 8;
   printf( "team.member : %d\n", team.member );

   return 0;
}