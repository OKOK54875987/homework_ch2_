#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("(A) \n");
	for (int i = 0; i <= 10; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B) \n");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = i; j <= 10	; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C) \n");
	for (int i = 0; i <= 10; i++) 
	{
		for (int j = 1; j <= 10 - i; j++) 
		{
			printf(" ");
		}
		for (int n = 0; n <= i; n++) 
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(D) \n");
	for (int i = 0; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int n = 0; n <= 10 - i; n++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}