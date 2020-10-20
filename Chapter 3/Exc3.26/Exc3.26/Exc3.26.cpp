//:Following Exercise 3.23, find the biggest TWO numbers among 10 numbers
/*
	Author:		Linloir(Jonathan Zhang)
	Version:	1.0
	Date:		2020-10-20
*/

#include <stdio.h>
#include <windows.h>

int main() {
	int number;
	int lg1 = 0;
	int lg2 = 0;

	for (int counter = 1; counter <= 10; counter++) {
		system("cls");

		printf("The largest number til now is:     %d\n", lg1);
		printf("The second large number til now is:%d\n", lg2);

		printf("Enter number %d: ", counter);
		scanf_s("%d", &number);

		//Awsome part:P
		int temp = number > lg1 ? lg1 : number;
		lg1 = number > lg1 ? number : lg1;
		lg2 = number > lg2 ? temp : lg2;
	}
	printf("\nThe largest number is:   %d\n", lg1);
	printf("The second large number is:%d\n", lg2);

	return 0;
}
