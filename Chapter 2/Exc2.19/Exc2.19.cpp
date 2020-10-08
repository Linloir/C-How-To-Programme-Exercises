// Exc2.19.cpp: 定义控制台应用程序的入口点。
/*
	Program:Calculate average, sum, product and compare two integers
	Date:2020-10-08
	Author:Jonathan Zhang
*/

#include "stdafx.h"
#include <stdio.h>

//function main begins the program execution
int main()
{
	int integer1;	//the first entered integer
	int integer2;	//the second entered integer
	int integer3;	//the third entered integer

	printf("%s","Enter three differnet integers: ");
	scanf_s("%d %d %d", &integer1, &integer2, &integer3);

	int avg;	//variable in which store the average of the three integers
	int sum;	//sum of the three integers
	int prd;	//product of the three integers
	int smallest;	//the smallest of the three
	int largest;	//the largest of the three

	avg = (integer1 + integer2 + integer3) / 3;
	sum = integer1 + integer2 + integer3;
	prd = integer1 * integer2 * integer3;

	if (integer1 > integer2)	//compare the three integers
	{
		if (integer1 > integer3)
		{
			largest = integer1;

			if (integer3 > integer2)
			{
				smallest = integer2;
			}
			if (integer3 < integer2)
			{
				smallest = integer3;
			}
		}
		if (integer1 < integer3)
		{
			largest = integer3;
			smallest = integer2;
		}
	}
	if (integer1 < integer2)
	{
		if (integer2 > integer3)
		{
			largest = integer2;

			if (integer3 > integer1)
			{
				smallest = integer1;
			}
			if (integer3 < integer1)
			{
				smallest = integer3;
			}
		}
		if (integer2 < integer3)
		{
			largest = integer3;
			smallest = integer1;
		}
	}

	printf("Sum is %d\n", sum);
	printf("Average is %d\n", avg);
	printf("Product is %d\n", prd);
	printf("Smallest is %d\n", smallest);
	printf("Largest is %d\n", largest);

    return 0;
}//end of function main

