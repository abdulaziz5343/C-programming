#include <stdio.h>
int main(void) {
	int scale;
	printf("Enter the Beaufort scale: ");
	scanf_s("%d", &scale);
	if (scale< 1)
		printf("Calm\n");
	else if (scale >= 1 && scale <= 3)
		printf("Light air\n");
	else if (scale >= 4 && scale <= 27)
		printf("Breeze\n");
	else if (scale >= 28 && scale <= 47)
		printf("Gale\n");
	else if (scale >= 48 && scale <= 63)
		printf("Storm\n");
	else
		printf("Hurricane\n");

	return 0;
}
