// Exc2.17.cpp: 定义控制台应用程序的入口点。
/*
	Date:2020-10-08
	Last edited on:2020-10-08
	Author:Jonathan Zhang
*/

#include "stdafx.h"
#include <stdio.h>	//standard headfile for input and output

//function main begins program execution
int main()
{
	/*(a)print 1-4 using one printf statement without \*/
	printf("1	2	3	4");
	printf("\n");

	/*(b)print 1-4 using four shift characters*/
	printf("1\t2\t3\t4\t");
	printf("\n");

	/*(c)print 1-4 using four printf statements*/
	printf("1	");
	printf("2	");
	printf("3	");
	printf("4	");
	printf("\n");

    return 0;
}//end of function main

