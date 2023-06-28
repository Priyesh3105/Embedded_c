#include<stdio.h>
#include<limits.h>

int main(){
    int varA = INT_MIN;
    int varB = INT_MAX;

    printf("the range of signed integer is from %d to %d \n",varA, varB);

    unsigned int varC = 0;
    unsigned int varD = UINT_MAX;

    printf("the range of unsigned integer is from %u to %u \n",varC, varD);

    short int varE = SHRT_MIN;
    short int varF = SHRT_MAX;

    printf("the range of signed short integer is from %d to %d \n",varE, varF);

    unsigned short int varG = 0;
    unsigned short int varH = USHRT_MAX;

    printf("the range of unsigned short integer is from %u to %u \n",varG, varH);

    long int varI = LONG_MIN;
    long int varJ = LONG_MAX;

    printf("the range of signed long integer is from %ld to %ld \n",varI, varJ);

    unsigned long int varK = 0;
    unsigned long int varL = ULONG_MAX;

    printf("the range of unsigned long integer is from %lu to %lu \n",varK, varL);

    long long int varM = LONG_LONG_MIN;
    long long int varN = LONG_LONG_MAX;

    printf("the range of signed long long integer is from %lld to %lld \n",varM, varN);

    unsigned long long int varO = 0;
    unsigned long long int varP = ULONG_LONG_MAX;

    printf("the range of unsigned long long integer is from %llu to %llu \n",varO, varP);
    
    return 0;
}