//:Calculation of world population in the next 75 years
/*
	Author:	Linloir(Jonathan Zhang)
	Date:	2020-10-27
	Version:1.0
*/

#include <stdio.h>

int main() {
	long long int worldPopulation = 7585204179;
	double inflationRate = 0.0111;
	int year = 1;
	bool doubled = false;

	printf("Year\tPopulation\n");

	for (; year <= 75; year++) {
		worldPopulation = worldPopulation * (inflationRate + 1);
		printf("%d\t%lld", year, worldPopulation);
		if (worldPopulation > 2 * 7585204179 && doubled == false) {
			printf("←In this year, Pupolation gets doubled.\n");
			doubled = true;
		}
		else
			printf("\n");
	}

	return 0;
}
