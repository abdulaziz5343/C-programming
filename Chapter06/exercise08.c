/* Write a program that prints a one-month calendar. The user specifies
 * the number of days in the month and the day of the week on which the
 * month begins:
 *
 * Enter number of days in month: 31
 * Enter starting day of the week (1=Sun, 7=Sat): 3
 *
 *        1  2  3  4  5
 *  6  7  8  9 10 11 12
 * 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26
 * 27 28 29 30 31
 *
 * Hint: This program isn't as hard as it looks. The most important part
 * is a for statement that uses a variable i to count from 1 to n, where
 * n is the number of days in the month, printing each value of i.
 * Inside the loop, an if statement tests whether i is the last day of
 * the week; if so, it prints the new-line character.
 */
#include <stdio.h>

int main(void)
{
	int day, day_week, i, j, k;
	printf("Enter number of days in month: ");
	scanf_s("%d", &day);
	printf("Enter starting day of the week: ");
	scanf_s("%d", &day_week);

	for (j = 1; j < day_week; j++)
		printf("     ");
	for (i = 1; i <= day; i++)
	{
		
		printf("%5d", i);
		k = i + j - 1;
		if (k == 7 || k == 14 || k == 21 || k == 28)
			printf("\n");
	}
	printf("\n\n");
	return 0;
}
