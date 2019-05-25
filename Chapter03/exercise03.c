#include <stdio.h>

int main(void) {
	int fir, sec, thir, fo, fi;

	printf("Enter ISBN: ");
	scanf_s("%d-%d-%d-%d-%d", &fir, &sec, &thir,&fo,  &fi);
	printf("GS1 prefix: %d\n", fir);
	printf("Group indentifier: %d\n", sec);
	printf("Publisher code: %d\n", thir);
	printf("Item number: %d\n", fo);
	printf("Check digit: %d\n", fi);
	return 0;
}
