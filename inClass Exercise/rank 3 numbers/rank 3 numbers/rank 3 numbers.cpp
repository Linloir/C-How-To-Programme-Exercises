//:Using exchange method to rank three numbers* (ADVANCED TUTORIAL)
/*
	Author:		Linloir(Jonathan Zhang)
	Date:		2020-10-23
	Version:	1.0
*/

/* The original version

#include <stdio.h>

int main() {
	//Claim a stack of 3 numbers
	int input[3];

	//Require input
	printf("Please input 3 numbers (type int): ");
	scanf_s("%d %d %d", &input[0], &input[1], &input[2]);

	//Exchange Method*
	for (int i = 0; i < 3; i++) {					//Counter of the BIGGEST numbers ranked
		for (int j = 0; j < 3 - i - 1; j++) {		//location of bit to be ranked next
			if (input[j] > input[j + 1]) {			//Exchange if bigger
				int temp;
				temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}

	//Output result
	for (int i = 0; i < 3; i++) {
		printf("%d ", input[i]);
	}

	return 0;
}

*/

//The program can be extend to rank arbitrarily counts of numbers:

#include <stdio.h>

int main() {
	//Definite the count of numbers
	int count;
	printf("Please enter the count of numbers you want to sort (of type int): ");
	scanf_s("%d", &count);

	//Initialize the stack of numbers
	

	//Store input numbers into stack
	for (int step = 0; step < count; step++) {
		printf("Enter number %d: ", step + 1);
		scanf_s("%d", &input[step]);
	}

	//Exchange method (body part)
	for (int rkdCount = 0; rkdCount < count; rkdCount++) {
		for (int pos = 0; pos < count - rkdCount - 1; pos++) {
			if (input[pos] > input[pos + 1]) {
				int temp = input[pos];
				input[pos] = input[pos + 1];
				input[pos + 1] = temp;
			}
		}
	}

	//Output
	for (int step = 0; step < count; step++) {
		printf("%d ", input[step]);
	}

	return 0;
}