
#include <stdio.h>

int main(void) {
	float number, max_num=0;
	
	do {

		printf("Enter a number: ");
		scanf_s("%f", &number);

		max_num = max_num > number ? max_num : number;
				
	} while (number != 0);

	printf("The largest number is: %.2f\n\n", max_num);
	return 0;
}
