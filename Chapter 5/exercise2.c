#include <stdio.h>
int main(void) {
	int hh, mm;
	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d", &hh, &mm);
	
	if (hh >= 00 && hh <= 11)
		printf("Equivalent 12-hour time: %d:%d AM\n", hh, mm);
	else if (hh==12)
		printf("Equivalent 12-hour time: %d:%d PM\n", hh, mm);
	else
		printf("Equivalent 12-hour time: %d:%d PM\n", hh-12, mm);
	return 0;

}
