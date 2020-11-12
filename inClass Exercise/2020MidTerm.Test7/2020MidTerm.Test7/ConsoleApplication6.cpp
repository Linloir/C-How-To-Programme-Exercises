//Test 7
/*
	Author:	Jonathan Zhang
	Date:	2020-11-5
	Version:1.0
*/

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double distance = -100;
	double bounceHeight = 100;
	printf("Please input n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		distance += 2 * bounceHeight;
		bounceHeight *= 0.5;
		printf("第%d次落地时， 共经过%lf米， 第%d次反弹高度为%lf米\n", i, distance, i, bounceHeight);	
	}

	return 0;
}
