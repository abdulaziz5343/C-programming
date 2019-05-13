/*Prints a table of square using a for statement*/
#include <stdio.h>
int main(void)
{
	short i, n;

	printf("This program prints a table of suares.\n");
	printf("Enter number of entries in table: ");
	scanf_s("%hd", &n);

	for (i = 1; i <= n; i++)
		printf("%10hd%10hd\n", i, i * i);
	return 0;
}
/*smallest n value for short is 182, that causes overflow*/
/*smallest n value for int is 46341, that causes overflow*/
/*smallest n value for long is  46341, that causes overflow*/
