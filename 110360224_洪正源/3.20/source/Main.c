#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float $ofHoursWorked, HourlyRateOfTheWorker, salary, credit, limit;
	printf("Enter $ of hours worked(-1 to end): ");
	scanf_s("%f", &$ofHoursWorked);


	while ((int)$ofHoursWorked != EOF)
	{
		printf("Enter hourly rate of the worker($00:00): ");
		scanf_s("%f", &HourlyRateOfTheWorker);
		if (($ofHoursWorked) > 40)
		{
			salary = (($ofHoursWorked - 40) * (HourlyRateOfTheWorker*1.5))+(40* HourlyRateOfTheWorker) ;
			printf("%f", salary);
		}
		else
		{
			salary = ($ofHoursWorked* HourlyRateOfTheWorker);
			printf("%f", salary);
		}
		puts("\n");
		printf("Enter $ of hours worked(-1 to end): ");
		scanf_s("%f", &$ofHoursWorked);
	}
	system("pause");
	return 0;
}