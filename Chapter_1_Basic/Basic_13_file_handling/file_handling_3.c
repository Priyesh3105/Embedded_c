#include<stdio.h>

//opening a file in apend mode

int main(){
    FILE* file = fopen("priyesh_data.txt", "a");

    if(file != 0){
        fprintf(file, "here we go again.\n");
        fputs("I'm tryin hard.\n", file);
        fclose(file);
    }
    return 0;
}