#include <stdio.h>


int main(void)
{
	int arr[5];
	int p, i, r;
	int k = 0;
	printf("5개의 정수를 입력하세요: ");
	for (i=0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	

	printf("홀수출력: ");
	for (r=0; r<5; r++)
	{
		if ((arr[r] % 2) != 0) //홀수라면
		{
			printf("%d ", arr[r]);
		}

	}

	printf("\n짝수출력: ");
	for (r = 0; r < 5; r++)
	{
		if ((arr[r] % 2) == 0) //짝수라면
		{
			printf("%d ", arr[r]);
		}

	}


	return 0;
}
