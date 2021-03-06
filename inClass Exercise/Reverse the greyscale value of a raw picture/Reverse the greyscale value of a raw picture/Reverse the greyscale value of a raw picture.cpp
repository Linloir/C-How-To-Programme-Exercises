﻿// Reverse the greyscale value of a raw picture
/*
    Author:     Linloir(Jonathan Zhang)
    Date:       2020-10-27
    Version:    10.0(2020-10-30)
*/

#define _CRT_SECURE_NO_DEPRECATE        //Ignore annoying warnings C6262

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HEIGHT 400
#define WIDTH  400

//typedef unsigned char BYTE;

int main() {
    //A pointer points to construct FILE
    FILE* fp;

    //Declare a two dimension array to storage the information of each pixel
    unsigned int greyScale[HEIGHT][WIDTH];

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
    unsigned char* fileStorage = (unsigned char*)malloc(sizeof(unsigned int) * HEIGHT * WIDTH);
    if (fileStorage == NULL) {
        printf("Malloc function failed");
        return 0x2;
    }
    else {
        fread(fileStorage, sizeof(unsigned int) * HEIGHT * WIDTH, 1, fp);
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

    //Find the wrong numbers
    //for (int x = 0; x < 400; x++) {
        //for (int y = 0; y < 400; y++) {
            //if (greyScale[x][y] == 0)
                //printf("x: %d; y: %d; %u\n", x,y,greyScale[x][y]);
        //}
    //}

    //Read the output path
    printf("Data saved, please enter a new path to store output image:\n");
    scanf_s("%s", filePath, 256);

    //Create new raw file

    //! WARNING
    //! fp = fopen(filePath, "w");
    //! in version 9.0, output is more than 160,000 pixels
    //! "w" writes in txt mode while "wb" write in binary mode

    fp = fopen(filePath, "wb");
    if (fp == NULL) {
        printf("Failed!");
        return 0x3;
    }

    //Write data into new file
    for (int x = 0; x < 400; x++) {             //Line count from 1 to 400
        for (int y = 0; y < 400; y++) {         //Row count from 1 to 400
            putc(greyScale[x][y], fp);
        }
    }
    fclose(fp);

    printf("Done!\n");

    return 0;
}