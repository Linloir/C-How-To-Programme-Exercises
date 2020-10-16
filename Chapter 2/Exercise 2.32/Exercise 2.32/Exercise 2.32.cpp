// BMI Counter Program
/*
    Date:   2020-10-15
    Author: Linloir
    Author: Jonathan Zhang
    Version:1.0
*/

#include <stdio.h>

int main() {
    
    double wt;  //weight of the user
    double ht;  //height of the user
    double bmi; //BMI of the user

    printf("Please enter your weight (in kilogram) : ");
    scanf_s("%lf", &wt);     //Read the weight of the user

    printf("Please enter your height (in meter) : ");
    scanf_s("%lf", &ht);     //Read the height of the user

    bmi = wt / (ht * ht);

    if (bmi < 18.5) {
        printf("Your BMI value is %.1lf, which is considered UNDERWEIGHT. Beware!\n", bmi);
    }
    else if (bmi < 25) {
        printf("Your BMI value is %.1lf, which is considered normal, good job!\n", bmi);
    }
    else if (bmi < 30) {
        printf("Your BMI value is %.1lf, which is considered OVERWEIGHT. Beware!\n", bmi);
    }
    else {
        printf("Your BMI value is %.1lf, which is considered OBESE. Beware!\n", bmi);
    }

    return 0;
}
