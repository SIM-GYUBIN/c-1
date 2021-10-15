#include <stdio.h>

int solve(int num)
{
	if (num == 1)
		printf("1");
	else
	{
		int n;
		n = num % 2;
		solve(num / 2);
		printf("%d", n);
	}
}


int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	solve(num);

	return 0;
}