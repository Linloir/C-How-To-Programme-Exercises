// Reverse the greyscale value of a raw picture
/*
    Author:     Linloir(Jonathan Zhang)
    Date:       2020-10-27
    Version:    1.0    
*/

#define _CRT_SECURE_NO_DEPRECATE        //Ignore annoying warnings C6262

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HEIGHT 400
#define WIDTH  400

typedef unsigned char BYTE;

int main() {
    //A pointer points to construct FILE
    FILE* fp;

    //Declare a two dimension array to storage the information of each pixel
    BYTE greyScale[HEIGHT][WIDTH];

    //Get the file path from standard input
    char filePath[256] = { 0 };                              //String type filepath
    printf("Please enter the file path:\n");
    scanf_s("%s", filePath, 256);

    //Read file
    fp = fopen(filePath, "rb");
    if (fp == NULL) {
        printf("Failed");
        return 0x3;
    }

    //Assign storage
    unsigned char* fileStorage = (unsigned char*)malloc(sizeof(unsigned char) * HEIGHT * WIDTH);
    if (fileStorage == NULL) {
        printf("Malloc function failed");
        return 0x2;
    }
    else {
        fread(fileStorage, sizeof(unsigned char) * HEIGHT * WIDTH, 1, fp);
        printf("File read!\n");
    }

    //Read the greyscale of the next pixel
    for (int x = 0; x < 400; x++) {             //Line count from 1 to 400
        for (int y = 0; y < 400; y++) {         //Row count from 1 to 400
            greyScale[x][y] = 255 - fileStorage[x * WIDTH + y];
        }
    }
    free(fileStorage);
    fclose(fp);

    //Read the output path
    printf("Data saved, please enter a new path to store output image:\n");
    scanf_s("%s", filePath, 256);

    //Create new raw file
    fp = fopen(filePath, "w");
    if (fp == NULL) {
        printf("Failed!");
        return 0x3;
    }

    //Write data into new file
    for (int x = 0; x < 400; x++) {             //Line count from 1 to 400
        for (int y = 0; y < 400; y++) {         //Row count from 1 to 400
            fwrite(&greyScale[x][y], 1, 1, fp);
        }
    }
    fclose(fp);

    printf("Done!\n");

    return 0;
}