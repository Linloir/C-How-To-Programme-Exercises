//Test 4
/*
	Author:	Jonathan Zhang
	Date:	2020-11-5
	Version:3.0
*/

#include <stdio.h>
#include <math.h>

void precisionControl(double, int);

int main() {
	double pai;
	int count;
	double temp = 0;
	do {
		printf("Please enter the number of counts (decide precision): ");
		scanf_s("%d", &count);
	} while (count <= 0);

	for (int step = 1; step < count; step++) {
		temp = temp + pow(-1, step + 1) / (2 * step - 1);
	}

	pai = 4 * temp;
	printf("Enter the output precision [WARNING] Max is 8 digit:");
	int prec;
	scanf_s("%d", &prec);
	for (; prec > 8;) {
		printf("[WARNING] Max precision is 8 digit after dot, input again!\n");
		printf("Enter the output precision [WARNING] Max is 8 digit:");
		scanf_s("%d", &prec);
	}

//!	pai = precisionControl(pai, prec);
//!	printf("The likely value of pai (in precision %d) is: %g", count, pai);

	precisionControl(pai, prec);

	return 0;
}

//!double precisionControl(double input, int prec) {
void precisionControl(double input, int prec) {
	long int temp;

	temp = input * pow(10, prec);
//!	printf("temp = %ld\n", temp);
//!	input = (double)temp / pow(10, prec);
//!	printf("input = %lf\n", input);

//!	printf("The likely value of pai (in precision %d) is: %lf", prec, input);

	printf("The likely value of pai (in precision %d) is: ", prec);
	//Output the full part
	printf("%d.", (int)input);

	//Output the decimal part
	temp = temp % (int)pow(10, prec);
	for (int i = 1; i <= prec; i++) {
		printf("%d", (int)(temp / pow(10, prec - i)) % 10);
	}

	printf("\n");
}