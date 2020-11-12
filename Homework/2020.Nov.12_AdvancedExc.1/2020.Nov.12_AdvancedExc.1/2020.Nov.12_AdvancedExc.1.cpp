//
/*
	Author:	Jonathan
	Date:	2020-11-12
	Version:11.0
*/

#include <stdio.h>

//Using #define makes the program more adaptive
#define WIDTH 8
#define HEIGHT 7
#define RIGHTSTEP WIDTH - 1
#define DOWNSTEP HEIGHT - 1

int Dstrb(int, int*, int*, int);	//function to distribute steps to next waiting position
int GetPosition(int, int);			//get the position after the next movement

void GetPath(int*);					//Get the specific path to the ending point
int CountSum(int*);				//Count the sum of numbers on the specific path
void CountMin(int, int*);
void PathCopy(int*);

int count;							//Count the total count of paths
int min;
int buffer[WIDTH + HEIGHT - 1];
int map[WIDTH * HEIGHT] = { 0, 10, 2, 9, 1, 22, 3, 1,
							25, 6, 5, 0, 9, 7, 4, 11,
							0, 5, 11, 19, 6, 3, 22, 7,
							2, 3, 88, 6, 5, 11, 1, 6,
							7, 6, 9, 0, 11, 4, 12, 7,
							9, 8, 4, 15, 4, 0, 9, 1,
							1, 0, 5, 7, 11, 6, 2, 0 };

int main() {
	count = 0;
	int StpRPos[RIGHTSTEP + 1] = { 0 };

	Dstrb(RIGHTSTEP, &StpRPos[0], &StpRPos[0], 1);
	GetPath(&StpRPos[0]);
	
	printf("Total path count: %d\n", count);
	printf("Min path is: ");
	for (int i = 0; i < WIDTH + HEIGHT - 2; i++) {
		printf("%d → ", buffer[i]);
	}
	printf("%d", buffer[WIDTH + HEIGHT - 2]);
	printf(" ; Min Sum is: %d\n", min);


	return 0;
}

int Dstrb(int numTbDstrbted, int* currentPosLoc, int* startPos, int currentPos) {
	//numTbDstrbted = the count of step need to be distributed
	//currentPosLoc = the location of the current position to be assigned steps to

	if (currentPos < DOWNSTEP + 1) {	//judge wether the last position
		currentPos++;					//move the position array to the next position
		int nextDstrbt = 1;				//pick out one step from the current position (will apply actually later)
		for (*currentPosLoc = numTbDstrbted; *currentPosLoc > 0; nextDstrbt++) {	//set steps in the current position
			GetPath(startPos);			//get the current path
			*currentPosLoc -= 1;		//apply the change earlier (pick out one step from the current position)
//			printf("%d\n", *currentPosLoc);
			Dstrb(nextDstrbt, currentPosLoc + 1, startPos, currentPos);				//modify the next position
		}
		return 0;
	}
	else {
		*currentPosLoc = numTbDstrbted;
		return 0;
	}
}

void GetPath(int* StepRStrtPos) {
	//StepRStrtPos = The start position of the array storing the right steps

	int pathStep[RIGHTSTEP + DOWNSTEP] = { 0 };
	for (int pathStpPos = 0; pathStpPos < RIGHTSTEP + DOWNSTEP; StepRStrtPos++) {
		if (*StepRStrtPos > 0) {
			for (int i = *StepRStrtPos; i > 0; pathStpPos++, i--) {
				pathStep[pathStpPos] = 1;
			}
		}
		if (pathStpPos < RIGHTSTEP + DOWNSTEP) {
			pathStep[pathStpPos] = 2;
			pathStpPos++;
		}
	}

	int position[WIDTH + HEIGHT - 1] = { 1 };
	printf("Path Found: ");
	for (int i = 0; i < RIGHTSTEP + DOWNSTEP; i++) {
		printf("%d → ", position[i]);
		position[i + 1] = GetPosition(position[i], pathStep[i]);

	}
	printf("%d", position[WIDTH + HEIGHT - 2]);
	printf(" ; Sum is: %d", CountSum(&position[0]));
	printf("\n");
	if (count == 1) {
		PathCopy(&position[0]);
		min = CountSum(&position[0]);
	}
	CountMin(CountSum(&position[0]), &position[0]);
	count++;
}

int GetPosition(int position_old, int movement) {
	int position_new;
	switch (movement) {
	case 1:	position_new = position_old + 1;
			break;
	case 2:	position_new = position_old + WIDTH;
			break;
	}
	return position_new;
}

int CountSum(int* allPosition) {
	int sum = 0;
	for (int i = 0; i < WIDTH + HEIGHT - 1; i++) {
		sum += map[allPosition[i] - 1];
	}
	return sum;
}

void CountMin(int current, int* currentPath) {
	min = current < min ? current : min;
	if (current < min)
		PathCopy(currentPath);
}

void PathCopy(int* currentPath) {
	for (int i = 0; i < WIDTH + HEIGHT - 1; i++) {
		buffer[i] = currentPath[i];
	}
}