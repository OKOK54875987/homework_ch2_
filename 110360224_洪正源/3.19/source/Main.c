#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float LoanPrincipal, InterestRate, theLoanInDays,interCharge;
	printf("Enter loan principal(-1 to end): ");
	scanf_s("%f", &LoanPrincipal);
	while ((int)LoanPrincipal != EOF)
	{
		printf("Enter interest rate(-1 to end): ");
		scanf_s("%f", &InterestRate);
		printf("Enter the loan In Days(-1 to end): ");
		scanf_s("%f", &theLoanInDays);
		interCharge = (LoanPrincipal*InterestRate*theLoanInDays)/365;
		printf("The interest charge is $ % .2f \n", interCharge);
		puts("\n");
		printf("Enter loan principal(-1 to end): ");
		scanf_s("%f", &LoanPrincipal);
	}
	system("pause");
	return 0;
}