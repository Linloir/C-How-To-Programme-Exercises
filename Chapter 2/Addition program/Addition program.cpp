// Addition program.cpp: 定义控制台应用程序的入口点。
/*
	Date:2020-10-08
	Author:Jonathan Zhang
*/
#include "stdafx.h"
#include <stdio.h> //head file for input and output

//function main begins program execution
int main()
{
	int integer1;	//first number to be entered by user
	int integer2;	//second number to be entered by user

	printf("Enter first integer\n");	//prompt(提示/请求)
	scanf_s("%d", &integer1);	//read the first integer

	printf("Enter second integer\n");	//prompt
	scanf_s("%d", &integer2);	//read the second integer

	int sum;	//store the result of summing integer 1 and integer 2
	sum = integer1 + integer2;	//assign(分配) total to sum

	printf("Sum is %d\n", sum);	//print sum

    return 0;
}//end of function main