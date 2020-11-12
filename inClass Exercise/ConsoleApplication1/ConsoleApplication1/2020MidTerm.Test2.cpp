//Test two
/*
	Author:	Jonathan Zhang
	Date:	2020-11-5
	version:1.0
*/

#include <stdio.h>
#include <math.h>

float abs_f(float);

int main() {
	float x1, y1;
	float x2, y2;
	float x, y;

	//(1)
	printf("(1)Solve the eqaution of the line:\n");
	printf("Please enter the first point on the line (x y): ");
	scanf_s("%f %f", &x1, &y1);
	printf("Please enter the first point on the line (x y): ");
	scanf_s("%f %f", &x2, &y2);

	float A, B, C;
	if (x1 == x2) {
		B = 0;
		A = 1;
		C = x1;
	}
	else if (y1 == y2) {
		A = 0;
		B = 1;
		C = y1;
	}
	else {
		A = (y2 - y1) / (x2 - x1);
		B = -1;
		C = y1 - (y2 - y1) / (x2 - x1) * x1;
		if (A < 0 && B < 0 && C < 0) {
			A = -A;
			B = -B;
			C = -C;
		}
	}

	printf("In equation Ax + By + C = 0, A = %g, B = %g, C = %g\n", A, B, C);
	//end of (1)

	//(2)
	printf("\n(2)Solve the distance between the input point and the line:\n");
	printf("Please enter the coordinate of the point (x y): ");
	scanf_s("%f %f", &x, &y);

	float distance = abs_f(A * x + B * y + C) / sqrtf(A * A + B * B);

	printf("The distance is %g\n", distance);
	//end of (2)

	//(3)
	printf("\n(3)Find the cross point of the vertical line and the original line:\n");
	float x0, y0;
	x0 = x - A * (A * x + B * y + C) / (A * A + B * B);
	y0 = y - B * (A * x + B * y + C) / (A * A + B * B);

	printf("The target point is (%g, %g)\n", x0, y0);
	//end of (3)

	//(4)
	printf("\n(4)Find if the point is between (x1, y1) and (x2, y2):\n");
	if ((x1 - x0) * (x2 - x0) > 0 || (y1 - y0) * (y2 - y0) > 0)
		printf("Outside!\n");
	else
		printf("Inside!\n");
	//end of (4)

	return 0;
	//end of 1.
}

float abs_f(float input) {
	if (input < 0)
		return -input;
	else
		return input;
}
