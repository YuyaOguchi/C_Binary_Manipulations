//  Yuya oguchi
//  COEN20L Lab3
//  10/08/2015
//  Bin to Signed and unsigned

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Asc2Bin(char *string, int binary[8]) {
    int inputlen = sizeof(string);
    int i = 0;
    printf("string is: %s\n", string);
    //printf("String length = %d\n", inputlen);

    for (i= 0; i < 8; i++){
        //printf("string is:%c\n", string[i]);
        //binary[i] = atoi(&string[i]);
        if (string[7 - i] == '1'){
            binary[i] = 1;
        } else {
            binary[i] = 0;
        }
        printf("binary %d is %d\n", i, binary[i]);
    }
}

int Bin2Unsigned(int binary[8]) {
    int result = 0;
    int i = 0;
    for (i= 0; i < 8; i++){
        //printf("%d", binary[i]);
        result += binary[i]<<i;
        //printf("%d\n", result);
    }
    return result;
}

int Bin2Signed(int binary[8]){
    int result = 0;
    int i = 0;

    for (i= 0; i < 7; i++){
        //printf("%d", binary[i]);
        result += binary[i]<<i;
        //printf("%d\n", result);
    }
    result -= binary[7]<<i;

    return result;
}

void Dec2Bin(unsigned int input, int *binary){
    int i;
    for (i = 0; i < 8; i++){
        binary[7 - i] = input % 2 ;
        input = input / 2;
    }
}

void PrintBin(int *binary){
    int i ;
    for (i = 0; i < 8; i++){
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    char *input;
    int binary[8];

    printf("Type in an binary\n");
    scanf("%s", input);

    //Dec2Bin(input, binary);
    //PrintBin(binary);
    Asc2Bin(input, binary);
    printf("unsigned value is: %d\n", Bin2Unsigned(binary));
    printf("signed value is: %d\n", Bin2Signed(binary));

    return 0;
}
