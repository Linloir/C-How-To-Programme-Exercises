//:Find all Pythagorean triples for side1, side2, and the hypotenuse all no larger than 500.
// Use a triple - nested for loop that simply tries all possibilities

/*
	Author:	Linloir(Jonathan Zhang)
	Date:	2020-10-27
	Version:1.0
*/

#include <stdio.h>

int pow(int, int);

int main() {
	puts("*********Pythagorean triples finder*********");

	int side1, side2, hypotenuse;
	for (side1 = 1; side1 <= 500; side1++) {
		for (side2 = 1; side2 <= 500; side2++) {
			for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++) {
				if (pow(hypotenuse, 2) == pow(side1, 2) + pow(side2, 2))
					printf("Pythagorean triples find! ( Side 1: %d;\tSide 2: %d;\thypotenuse: %d )\n", side1, side2, hypotenuse);
			}
		}
	}

	return 0;
}

int pow(int integer, int p) {
	for (int step = 1; step < p; step++)
		integer = integer * integer;
	return integer;
}

/*
Comments:
	1. This program do not automatically ignore the repetitive data. ( e.g. 3,4,5 & 4,3,5 )
*/