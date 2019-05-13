/*Prints a table of square using a for statement*/
#include <stdio.h>
int main(void)
{
	short i, n;
	char c;
	printf("This program prints a table of suares.\n");
	printf("Enter number of entries in table: ");
	scanf_s("%hd", &n);
	getchar();
	
	for (i = 1; i < n; i++)
	{
		printf("%10d%10d\n", i, i * i);
		if (i % 24 == 0)
		{
			printf("Enter to continue...");
			getchar();
		}
	}
	return 0;
}
