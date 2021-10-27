#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float dollar, salary;
	printf("Enter sales in dollars(-1 to end): ");
	scanf_s("%f", &dollar);
	while ((int)dollar != EOF)
	{
		salary = (dollar * 0.09);
		printf(" % .2f \n", salary);
		puts("\n");
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &dollar);
	}
	system("pause");
	return 0;
}