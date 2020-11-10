//Test 1
/*
	Author:	Jonathan Zhang
	Date:	2020-11-10
	Version:1.0
*/

#include <stdio.h>

int main() {
	int count = 0;
	for (int a = 1; a <= 4; a++) {
		for (int b = 1; b <= 4; b++) {
			for (int c = 1; c <= 4; c++) {
				if (a != b && a != c && b != c) {
					count++;
					printf("Number found: %d%d%d\tTotal count: %d\n", a, b, c, count);
				}
			}
		}
	}

	return 0;
}
