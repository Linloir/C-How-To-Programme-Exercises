// Exc2.20.cpp: 定义控制台应用程序的入口点。
/*
	Date:2020-10-09
	Author:Jonathan Zhang
*/

#include "stdafx.h"
#include <stdio.h>

//function main begins the program execution
int main()
{
	int r;	//radio of the circle
	int d;	//diameter of the circle

	printf("Enter the radio of the circle: ");
	scanf_s("%d", &r);

	d = 2 * r;
	
	printf("The diameter of the circle is %d\n", d);
	printf("The area of the circle is %f\n", 3.1415926 * r * r / 2);	//using a syntax as a parameter of printf to avoid float

    return 0;
}//end of function main

