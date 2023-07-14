#include<stdio.h>

//reading file using fgets() function

int main(){
    FILE* file = fopen("priyesh_data.txt", "r");
    if (file != 0)
    {
        char buffer[100];
        //read and print each line from the file
        while (fgets(buffer, sizeof(buffer), file) != 0)
        {
            printf("%s", buffer);
        }
        fclose(file);
    }
    return 0;
}