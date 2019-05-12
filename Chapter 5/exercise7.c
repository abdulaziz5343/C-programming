#include <stdio.h>
int main(void) {

	int  max_num, min_num;
	int i1, i2, i3, i4, j;
	printf("Enter four integers: ");
	scanf_s("%d%d%d%d", &i1, &i2, &i3, &i4);

	max_num = i1;
	max_num=max_num> i2 ? max_num : i2;
	max_num = max_num > i3 ? max_num : i3;
	max_num = max_num > i4 ? max_num : i4;
	
	min_num = i1;
	min_num = min_num > i2 ? i2 : min_num;
	min_num = min_num > i3 ? i3 : min_num;
	min_num = min_num > i4 ? i4 : min_num;

	printf("Largest number is: %d\n", max_num);
	printf("Smallest number is: %d\n", min_num);

	return 0;
}
