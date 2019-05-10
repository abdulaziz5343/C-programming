/*Modify the addfrac.c program of Section 3.2 so that the user enters both 
fractions at the same time, separated by a plus sign:*/

#include <stdio.h>

int main(void) {
	int num1, num2, denom1, denom2, sum_num, sum_denom;
	printf("Enter two fractions separated by a plus sign: ");
	scanf_s("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	sum_num = num1 * denom2 + num2 * denom1;
	sum_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", sum_num, sum_denom);
	return 0;
}
