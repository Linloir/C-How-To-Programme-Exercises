//Test 6
/*
	Author:	Jonathan Zhang
	Date:	2020-11-5
	Version:1.0
*/

#include <stdio.h>
#include <math.h>

int getdigit(int, int);

int main() {
	for (int i = 100; i <= 999; i++) {
		if ((pow(getdigit(i, 1), 3) + pow(getdigit(i, 2), 3) + pow(getdigit(i, 3), 3)) == i)
			printf("Number found: %d\n", i);
	}
	return 0;
}

int getdigit(int input, int digit) {
	return (int)(input / pow(10, digit - 1)) % 10;
}