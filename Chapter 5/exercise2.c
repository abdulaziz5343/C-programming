#include <stdio.h>

int main(void)
{
	int data_hh, data_mm;

	printf("Enter a 24-hour time: ");
	scanf_s("%2d:%2d", &data_hh, &data_mm);

	if ((data_hh >= 0 && data_hh < 12) && (data_mm >= 0 && data_mm <= 59))
		printf("Equivalent 12-hour time: %d:%d AM\n", data_hh, data_mm);
	else if ((data_hh == 12) && (data_mm >= 0 && data_mm <= 59))
		printf("Equivalent 12-hour time: %d:%d PM\n", data_hh, data_mm);
	else if ((data_hh > 12 && data_hh <= 23) && (data_mm >= 0 && data_mm <= 59))
		printf("Equivalent 12-hour time: %d:%d PM\n", data_hh - 12, data_mm);
	else
		printf("-----Invalid data-----\n\n");

	return 0;
