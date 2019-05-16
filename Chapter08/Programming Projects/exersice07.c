/* Write a program that reads a 5 x 5 array of integers and then prints the row
 * sums and the column sums:
 *
 * Enter row 1: 8 3 9 0 10
 * Enter row 2: 3 5 17 1 1
 * Enter row 3: 2 8 6 23 1
 * Enter row 4: 15 7 3 2 9
 * Enter row 5: 6 14 2 6 0
 *
 * Row totals: 30 27 40 36 28
 * Column totals: 34 37 37 32 21
 */

#include <stdio.h>


int main(void)
{
	int arr[5][5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Enter row %d: ", i+1);
		scanf_s("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
	}
	printf("\nRow totals: ");
	for (i = 0; i < 5; i++)
			printf("%d ", arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4]);
	
	printf("\nColumn total: ");
	for(i=0; i<5; i++)
		printf("%d ", arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i] + arr[4][i]);
	printf("\n\n");
	return 0;
}
