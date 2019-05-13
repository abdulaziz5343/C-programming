
/* Write a program that prompts the user to enter a number n, then prints all
 * even squares between 1 and n. For example, if the user enters 100, the
 * program should print the following:
 * 4
 * 16
 * 36
 * 64
 * 100
 */
#include <stdio.h>

int main(void)
{
	int number, square, n=1;
	printf("Enter a number: ");
	scanf_s("%d", &number);

	if (number == 0)
		printf("NULL\n");
	else
		do{
			if((n*n)%2==0)
		        printf("\n%d", n * n);
		n++;
		} while (n* n <= number);
	
	printf("\n\n");
	return 0; 
	
}
