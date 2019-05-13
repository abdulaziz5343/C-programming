/* Add a loop to the broker.c program of Section 5.2 so that the user can enter
 * more than one trade and the program will calculate the commision on each.
 * The program should terminate when the user enters 0 as the trade value:
 *
 * Enter value of trade: 30000
 * Commission: $166.00
 *
 * Enter value of trade: 20000
 * Commission: $144.00
 *
 * Enter value of trade: 0
 */

#include <stdio.h>

int main(void) {
	float commision, value, shares, price;

	do {
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

		
		printf("\n\n");
	} while (value != 0);
	return 0;
}
