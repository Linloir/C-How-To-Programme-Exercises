//:Using exchange method to rank three numbers* (ADVANCED TUTORIAL)
/*
	Author:		Linloir(Jonathan Zhang)
	Date:		2020-10-23
	Version:	1.0
*/

#include <stdio.h>

int main() {
	//Claim a stack of 3 numbers
	int input[3];

	//Require input
	printf("Please input 3 numbers (type int): ");
	scanf_s("%d %d %d", &input[0], &input[1], &input[2]);

	//Exchange Method*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 - i - 1; j++) {
			if (input[j] > input[j + 1]) {
				int temp;
				temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}
}