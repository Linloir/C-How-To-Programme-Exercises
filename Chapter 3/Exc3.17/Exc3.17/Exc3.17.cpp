//:Develop a C program to detect wether a consumer's consumption exceeds the line of his credit and do other calculations.
/*
	Author:		Linloir(Jonathan Zhang)
	Version:	1.0
	Date:		2020-10-20
*/

#include <stdio.h>

/*
Variable required:
	Account number
	Beginning balance
	Tatal charges
	Total credits
	Credit limit
Calculation:
	New balance = Beginning balance + Total charges - Total credits
*/

int main() {
	//Declaration of variables required
	int accountNumber;
	double beginningBalance, newBalance;
	double totalCharges, totalCredits;
	double creditLimit;

	for (;;) {		//infinite loop
		//Require for input
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &accountNumber);
		//break
		if (accountNumber == -1)	break;

		printf("Enter beginning balance: ");
		scanf_s("%lf", &beginningBalance);

		printf("Enter total charges: ");
		scanf_s("%lf", &totalCharges);

		printf("Enter total credits: ");
		scanf_s("%lf", &totalCredits);

		printf("Enter credit limit: ");
		scanf_s("%lf", &creditLimit);

		//Calculation of new balance
		newBalance = beginningBalance + totalCharges - totalCredits;

		//Output result
		if (newBalance > creditLimit) {
			printf("Account:\t%d\n", accountNumber);
			printf("Credit limit:\t%.2lf\n", creditLimit);
			printf("Balance:\t%.2lf\n", newBalance);
			puts("Credit Limt Exceeded.");
		}
		printf("\n\n");
	}
	
	return 0;
}
