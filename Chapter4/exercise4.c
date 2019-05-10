#include <stdio.h>
int main(void) {

	int quotient, decnum;
	int i1, i2, i3, i4, i5;
	printf("Enter a number between 0 and 32767: ");
	scanf_s("%d", &decnum);

	i5 = decnum % 8;
	quotient = decnum/8;
	i4 = quotient % 8;
	quotient = quotient / 8;
	i3 = quotient % 8;
	quotient = quotient / 8;
	i2 = quotient % 8;
	quotient = quotient / 8;
	i1 = quotient % 8;
	quotient = quotient / 8;

	printf("In octeal, your number: %d%d%d%d%d\n", i1, i2, i3, i4, i5);
	return 0;
}
