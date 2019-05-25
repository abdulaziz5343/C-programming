#include <stdio.h>
int main(void) {

	int num, frac1, frac2;
	printf("Enter a two-digit number: ");
	scanf_s("%d", &num);

	frac1 = num / 10;
	frac2 = num % 10;
	printf("The reversal is %d%d\n", frac2, frac1);
	return 0;

 }
