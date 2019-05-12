#include <stdio.h>

void tax_table(void) {
	printf("Income                      Amount\n");
	printf("Not over $750               1% of income\n");
	printf("$750-$2,250                 $7.50 plus 2% of amount over $750\n");
	printf("$2,250-$3,750               $37.50 plus 3% of amount over $2,250\n");
	printf("$3,750-$5,250               $82.50 plus 4% of amount over $3,750\n");
	printf("$5,250-$7,000               $142.50 plus 5% of amount over $5,250\n");
	printf("Over $7000                  $230.50 plus 6% of amount over $7,000\n");
	printf("\n\n\n\n");
	return 0;
}
int main(void)
{
	float income, tax;

   tax_table();
   printf("Enter amount of taxable income: ");
   scanf_s("%f", &income);
   
   if (income < 750.00f)
	   printf("Amount of tax:$%.2f\n", income * 0.01f);
   else if (income >= 750.00f && income < 2.250f)
   {
	   if (income == 750.00f)
		   printf("Amount of tax: $%.2f\n", 7.50f);
	   else
		   printf("Amount of tax: $%.2f\n", 7.50f + income * 0.02f);
   }
   else if (income >= 2250.00f && income < 3750.00f)
   {
	   if (income == 2250.00f)
		   printf("Amount of tax: $%.2f\n", 37.50f);
	   else
		   printf("Amount of tax: $%.2f\n", 37.50f + income * 0.03f);
   }
   else if (income >= 3750.00f && income < 5250.00f)
   {
	   if (income == 3750.00f)
		   printf("Amount of tax: $%.2f\n", 82.50f);
	   else
		   printf("Amount of tax: $%.2f\n", 82.50f + income * 0.04f);
   }
   else if (income >= 5250.00f && income < 7000.00f)
   {
	   if (income == 2250.00f)
		   printf("Amount of tax: $%.2f\n", 142.50f);
	   else
		   printf("Amount of tax: $%.2f\n", 142.50f + income * 0.05f);
   }
   else
	   printf("Amount of tax: $%.2f\n", 230.000 + income * 0.06);
   return 0;
}
