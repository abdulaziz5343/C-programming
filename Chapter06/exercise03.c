/* Write a program that asks the user to enter a fraction, then reduceds the
 * fraction to lowest terms:
 * 
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 * 
 * Hint: To reduce a fraction to lowest terms, first compute the GCD of the
 * numerator and denominator. Then divide both the numerator and demoninator by
 * the GCD.
 */
#include <stdio.h>

int main(void)
{
	int   i1,i2, m,  n, remainder;
	printf("Enter a fraction: ");
	scanf_s("%d/%d", &m, &n);
	i1 = m, i2 = n;
	do {
		remainder = m % n;
		m = n;
		n = remainder;

	} while (n != 0);

	printf("In lowest term:%d/%d\n\n", i1/m , i2/m );

	return 0;
}
