/* Modify the repdigit.c program of Section 8.1 so that it shows which digits
 * (if any) were repeated:
 *
 * Enter a number: 939577
 * Repeated digit(s): 7 9
 */

#include <stdio.h>
#include <stdbool.h>         /*C99*/

#define SEEN 0
#define REPEATED 1

int main(void)
{	
	long n;
	int i, digit_rep[10] = { 0 }, digit;


	printf("Enter a number: ");
	scanf_s("%ld", &n);
	
	while (n > 0) {
		digit = n % 10;
		digit_rep[digit]++;
		n /= 10;
	}
	printf("Digit     : ");
	for (i = 0; i < 10; i++)
		printf("%5d", i);
	printf("\nOccurences: ");
	for (i = 0; i < 10; i++)
		printf("%5d", digit_rep[i]);
	printf("\n\n");
	return 0;
	
} 
