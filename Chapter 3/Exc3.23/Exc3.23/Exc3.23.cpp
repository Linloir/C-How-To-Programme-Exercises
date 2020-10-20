//:Find the max number among 10 positive numbers
/*
	Author:		Linloir(Jonathan Zhang)
	Version:	1.0
	Date:		2020-10-20
*/

#include <stdio.h>
#include <Windows.h>		//in order to use clr

int main() {
	int number;
	int largest = 0;
	for (int counter = 1; counter <= 10; counter++) {
		system("cls");		//clear screen

		printf("largest number til now is: %d\n", largest);
		printf("Enter number %d: ", counter);
		scanf_s("%d", &number);

		largest = number > largest ? number : largest;
	}
	printf("largest number is: %d", largest);

	return 0;
}