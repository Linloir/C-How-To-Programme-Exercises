// Oct.16.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// A program that can solve a binary twice equation
/*
	Date:	2020-10-16
	Author:	Jonathan Zhang
	Author:	Linloir
	Version:1.0
*/

#include <stdio.h>

float sol(float, float);

int main() {
	puts("This is a program for solving the one-order equation");
	puts("a * x = b");

	printf("Enter a and b: ");
	float a, b;
	scanf_s("%f %f", &a, &b);

	printf("For equation %g * x = %g\n", a, b);
	printf("The solution of the equation is x = %g\n", sol(a, b));

	return 0;
}

float sol(float a, float b) {
	//ax = b
	float x = b / a;

	return x;
}

/*
Comments:
	1. Using "%g" can avoid the useless "0" in float numbers without losing precision due to "%.xf" rounds the number.
*/
