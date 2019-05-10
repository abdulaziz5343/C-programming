#include <stdio.h>
int main(void) {

	int num, frac1, frac2, frac3;
	printf("Enter a three-digit number: ");
	scanf_s("%d", &num);

	frac1 = num / 100;
	frac2 = (num%100)/10;
	frac3 = num % 10;
	printf("The reversal is %d%d%d\n", frac3, frac2, frac1);
	return 0;

}
