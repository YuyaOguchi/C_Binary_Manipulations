//  Yuya oguchi
//  COEN20L Lab2
//  10/01/2015
//  Dec to Bin converter

#include <stdio.h>
#include <stdlib.h>

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
    int input;
    int binary[8];

    printf("Type in an integer you want to convert to binary\n");
    scanf("%d", &input);

    Dec2Bin(input, binary);
    PrintBin(binary);

    return 0;
}
