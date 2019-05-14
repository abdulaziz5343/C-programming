
/* Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
 *
 * Enter a 12-hour time: 9:11 PM
 * Equivalent 24-hour time: 21:11
 *
 * See Programming Project 8 for a description of the input format.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
	int input_hh, input_mm;
	char am_pm;


	printf("Enter a 12-hour time: ");
	scanf_s("%d:%d %c", input_hh, input_mm, am_pm);

	switch (toupper(am_pm))
	{
	case 'A':
		if (input_hh == 12)
			input_hh -= 12;
		break;
	case 'P':
		input_hh = input_hh + 12;
		break;
	default:
		printf("Specify am or pm please\n");
		return 0;
	}
	printf("Equivalent 24-hour time:%.2:%.2d\n\n", input_hh, input_mm);
	return 0;
}
