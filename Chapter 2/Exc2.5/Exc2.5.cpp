// Exc2.5.cpp: 定义控制台应用程序的入口点。
/*
	Date:2020-10-08
	Author:Jonathan Zhang
*/ 

#include "stdafx.h"

//	function main begins program execution
int main()
{
	int integer1;	//first integer entered by user
	int integer2;	//second integer entered by user

	puts("Enter the first integer");	//using function puts() for safety consideration
	scanf_s("%d", &integer1);	//store the first integer

	puts("Enter the second integer");
	scanf_s("%d", &integer2);	//store the second integer

	int mtp;	//variable in which stores the mutiplication of the two integers
	mtp = integer1 * integer2;

	printf_s("mtp is %d\n", mtp);	//print the result on the screen
    
	return 0;
}//end of function main

