#include <stdio.h>
#include <errno.h>
#include<string.h>

int main(){
    FILE* file = fopen("unexist.txt", "rw");
    int errnum;
    if (file == 0)
    {
       errnum = errno;
       printf("the error number is : %d\n", errnum);
       perror("error printed by perror ");
       printf("the str error is : %s\n", strerror(errnum));
    }
    else{
        fclose(file);
    }
    return 0;
}