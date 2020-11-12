//Test 5
/*
	Author:	Jonathan Zhang
	Date:	2020-11-5
	Version:1.0
*/

#include <stdio.h>
#include <math.h>

int currentNumber(int, int);

int main() {
	int n, a;
	int sum = 0;

	printf("Please enter a: ");
	scanf_s("%d", &a);
	printf("Please enter n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum = sum + currentNumber(a,i);
//		printf("current Number is: %d\n", currentNumber(a, i));		//Test sentence
	}

	printf("The result is: %d", sum);

	return 0;
}

int currentNumber(int a, int step) {
	int output = 0;
	for (int i = 0; i < step; i++) {
		output = output + pow(10, i) * a;
	}
	return output;
}
