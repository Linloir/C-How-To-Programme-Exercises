#include <stdio.h>

int main()
{
    int integer1, integer2;

    printf("Please enter the first integer: ");
    scanf_s("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf_s("%d", &integer2);

    int sum, mtp, sub, mod;     //the sum, multiplication, substraction and mod of the two integers
    double div;     //the division of the two integers

    sum = integer1 + integer2;
    mtp = integer1 * integer2;
    sub = integer1 - integer2;
    mod = integer1 % integer2;

    double num1 = integer1, num2 = integer2;    //Convert integer1 and integer2 into double
    div = num1 / num2;

    printf("The sum is : %d\n", sum);
    printf("The multiplication is : %d\n", mtp);
    printf("The substraction is : %d\n", sub);
    printf("The division is : %f\n", div);
    printf("The mod is : %d\n", mod);

    return 0;
}

