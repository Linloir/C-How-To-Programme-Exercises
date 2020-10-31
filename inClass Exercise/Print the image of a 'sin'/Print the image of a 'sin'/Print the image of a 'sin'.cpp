//:Print the image of a 'sin' with one printf("*") statement

/*
	Author:	Linloir(Jonathan Zhang)
	Date:	2020-10-30
	Version:1.0
*/

#include <stdio.h>
#include <math.h>

int main() {
	int intervalBetweenMaxAndMin = 10;	//set default interval as 10;
	printf("Please enter the interval between max and min (for precision): ");
	scanf_s("%d", &intervalBetweenMaxAndMin);

	//set the value difference between two lines
	double valueEachLine = 1 / intervalBetweenMaxAndMin;


}
