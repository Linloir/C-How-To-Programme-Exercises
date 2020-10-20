// Exc2.18.cpp: 定义控制台应用程序的入口点。
/*
	Program:Compare two numbers
	Date:2020-10-08
	Author:Jonathan Zhang
*/

#include "stdafx.h"
#include <stdio.h>	//standard headfile for input and output

//function main begins the program execution
int main()
{
	int integer1;	//the first integer user entered
	int integer2;	//the secondd integer user entered

	puts("Enter the first integer");
	scanf_s("%d", &integer1);

	puts("Enter the second integer");
	scanf_s("%d", &integer2);

	if(integer1 == integer2)	//in case the two numbers are equal
	{
		puts("These numbers are equal");
	}
	if(integer1 > integer2)	//in case the first integer is larger
	{
		printf("%d is larger\n", integer1);
	}
	if(integer1 < integer2)	//in case the second integer is larger
	{
		printf("%d is larger\n", integer2);
	}

	printf("%d", integer1 += 3);
    return 0;
}//end of function main

