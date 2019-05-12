#include <stdio.h>

int main(void)
{
	int first_dd, first_mm, first_yy;
	int sec_dd, sec_mm, sec_yy;

	printf("Enter first date (mm/dd/yy): ");
	scanf_s("%d/%d/%d", &first_mm, &first_dd, &first_yy);
	printf("Enter first date (mm/dd/yy): ");
	scanf_s("%d/%d/%d", &sec_mm, &sec_dd, &sec_yy);

	if (first_yy == sec_yy)
		if (first_mm == sec_mm)
			if (first_dd == sec_dd)
				printf("Both date is same\n");
			else if(first_dd<sec_dd)
				printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
					first_mm, first_dd, first_yy, sec_mm, sec_dd, sec_yy);
			else 
				printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
					 sec_mm, sec_dd, sec_yy, first_mm, first_dd, first_dd );
		else if(first_mm<sec_mm)
			printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
				first_mm, first_dd, first_yy, sec_mm, sec_dd, sec_yy);
		else
			printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
				sec_mm, sec_dd, sec_yy, first_mm, first_dd, first_dd);
	else if(first_yy>sec_yy)
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
			first_mm, first_dd, first_yy, sec_mm, sec_dd, sec_yy);
	else
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
			sec_mm, sec_dd, sec_yy, first_mm, first_dd, first_yy);


	return 0;

}
