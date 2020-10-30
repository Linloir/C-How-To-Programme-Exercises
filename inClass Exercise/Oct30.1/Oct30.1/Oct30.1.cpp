//:Program calculating grade

/*
	Author:	Linloir
	Date:	2020-10-30
	Version:1.0
*/

#include <stdio.h>

int main() {
	int gradeInPercentage = 0;

	printf("Please enter grade (max 100): ");
	scanf_s("%d", &gradeInPercentage);

	if (gradeInPercentage == 100)
		printf("优秀\n");
	else {
		switch (gradeInPercentage / 10) {
		case 9: printf("优秀\n");
			break;
		case 8: printf("良好\n");
			break;
		case 7: printf("中等\n");
			break;
		case 6: printf("及格\n");
			break;
		default:printf("不及格\n");
			break;
		}
	}

	return 0;
}

