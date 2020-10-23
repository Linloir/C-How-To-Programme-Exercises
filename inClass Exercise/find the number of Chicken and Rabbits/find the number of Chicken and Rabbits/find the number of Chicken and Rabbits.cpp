//:Known that number of chicken and rabbits in total is n, number of legs in total is m.
// find the number of chicken and rabbits with two inputs 'n' and 'm'

/*
	Author:		Linloir(Jonathan Zhang)
	Date:		2020-10-23
*/

#include <stdio.h>

int main() {
	int ckCount, rbCount;	//ckCount: number of chicken; rbCount: number of rabbits
	int n, m;

	printf("Please input n and m: ");
	scanf_s("%d %d", &n, &m);

	ckCount = (4 * n - m) % 2 == 0 ? (4 * n - m) / 2 : -1;
	rbCount = n - ckCount;

	if (ckCount >= 0 && rbCount >= 0)
		printf("Number of chicken is %d, number of rabbits is %d\n", ckCount, rbCount);
	else
		printf("No solution!\n");

	return 0;

}
