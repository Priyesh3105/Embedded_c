#include<stdio.h>

//opening a file in write mode

int main(){
    FILE* file = fopen("priyesh_data.txt","w");
    if (file != NULL)
    {
        fprintf(file,"helo world!\n");
        fclose(file);
    }
    return 0;
}