#include <stdio.h>

int main(void)
{
	int num, n, cal;

	printf("please enter a number:");
	scanf_s("%d", &num);

	if (num == 1)
		printf("It is not a prime number.");
	else
	{
		for (n = 2; n < num; n++)
		{
			cal = num % n;
			if (cal == 0)
			{
				printf("It is not a prime number.");
				return 0;
			}

		}

		printf("It is a prime number.");
	}




	return 0;
}