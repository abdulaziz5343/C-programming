#include <stdio.h>
int main(void) {

	int sum1, sum2, total, check;
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
	printf("Enter the first 11 digits of a UPC: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
	sum1 = i1 + i3 + i5 + i7 + i9 + i11;
	sum2 = i2 + i4 + i6 + i8 + i10;
	total = 3 * sum1 + sum2;
	check = 9 - ((total - 1) % 10);
	
	if (i12 == check)
		printf("VALID\n");
	else
		printf("INVALID\n");
	return 0;
}
