/*Calculate a broker's commision*/
#include <stdio.h>

int main(void) {
	float commision, value, shares, price;

	printf("Enter the number of shares: ");
	scanf_s("%f", &shares);
	printf("Enter price per share: ");
	scanf_s("%f", &price);

	value = shares * price;

	if (value <= 200.00f)
		commision = 33.00f + .03f * value;
	else if (value > 2000.00f)
		commision = 33.00f + .02f * value;
	
	printf("Commision: $%.2f\n", commision);

	return 0;
}
