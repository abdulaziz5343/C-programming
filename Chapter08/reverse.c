/*Reverses a series of numbers*/
#include <stdio.h>

#define N 10
int main(void)
{
	int a[N], i;
	printf("Enter %d number: ", N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &a[i]);

	printf("In reverse order:");
	for (i = N - 1; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}
