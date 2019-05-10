#include <stdio.h>
int main(void){
	int d, m, y, num;
	float price;
	printf("Enter item number: ");
	scanf_s("%d", &num);
	printf("Enter unit price: ");
	scanf_s("%f", &price);
	printf("Enter a date (mm/dd/yy): ");
	scanf_s("%d/%d/%d", &m, &d, &y);
	
	if (y >= 1900 && y < 2019)
	{
		if (m >= 1 && m <= 12)
		{
			if ((d >= 1 && d <= 31) && (m == 1 || m == 3 || m == 5 || m == 8 || m == 10 || m == 7 || m == 12))
			{ 
				printf("Item                 Unit                    Purchase\n");
				printf("                     Price                   Date\n");
				printf("%d                  $%.2f                  %2.0d/%2.0d/%2.0d\n", num, price, d, m, y);
			}				
			else if ((d >= 1 && d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11))
			{
				printf("Item                 Unit                    Purchase\n");
				printf("                     Price                   Date\n");
				printf("%d                  $%.2f                   %2.0d/%2.0d/%2.0d\n", num, price, d, m, y);
			}
			else if ((d >= 1 && d < 29) && (m == 2))
			{
				printf("Item                 Unit                    Purchase\n");
				printf("                     Price                   Date\n");
				printf("%d                  $%.2f                   %2.0d/%2.0d/%2.0d\n", num, price, d, m, y);
			}
			else
				printf("Day is invalid\n");
		}
		else
			("Month is invalid\n");
	}
	else
		printf("Year is invalid\n");

}
