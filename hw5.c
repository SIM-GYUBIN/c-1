#include <stdio.h>


int main(void)
{
	int arr[5];
	int p, i, r;
	int k = 0;
	printf("5���� ������ �Է��ϼ���: ");
	for (i=0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	

	printf("Ȧ�����: ");
	for (r=0; r<5; r++)
	{
		if ((arr[r] % 2) != 0) //Ȧ�����
		{
			printf("%d ", arr[r]);
		}

	}

	printf("\n¦�����: ");
	for (r = 0; r < 5; r++)
	{
		if ((arr[r] % 2) == 0) //¦�����
		{
			printf("%d ", arr[r]);
		}

	}


	return 0;
}
