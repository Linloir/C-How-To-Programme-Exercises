//Test 3
/*
	Author:	Jonathan Zhang
	Date:	2020-11-5
	Version:1.0
*/

#include <stdio.h>

int bigMonth(int);

int main() {
	int year, month, day;
	int interval;
	printf("Please input date in format (yyyy mm dd): ");
	scanf_s("%d %d %d", &year, &month, &day);

	//Consider lunar year
	if ((year % 100) % 4 == 0) {		//if lunar year
		if (month < 3)
			interval = 31 * bigMonth(month - 1) + day;
		else
			interval = 31 * bigMonth(month - 1) + 29 + 30 * (bigMonth(month - 1) - 1) + day;
		printf("This day is the %d day in year %d", interval, year);
	}
	else {
		if (month < 3)
			interval = 31 * bigMonth(month - 1) + day;
		else
			interval = 31 * bigMonth(month - 1) + 28 + 30 * (bigMonth(month - 1) - 1) + day;
		printf("This day is the %d day in year %d", interval, year);
	}
}

int bigMonth(int month) {
	int monthCount = 0;
	for (int i = 1; i <= month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			monthCount++;
	}
	return monthCount;
}