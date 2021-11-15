#include <stdio.h>


int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	int* fptr1 = &arr1[0];
	int* bptr1 = &arr1[5];
	int* fptr2 = &arr2[0];
	int* bptr2 = &arr2[5];
	int i, temp;

	printf("arr1: ");                 //swap 전 출력
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);


	for (i = 0; i < 3; i++)
	{
		temp = *fptr1;            //앞부분 바꾸기
		*fptr1 = *fptr2;
		*fptr2 = temp;
		
		temp = *bptr1;           //뒷부분 바꾸기
		*bptr1 = *bptr2;
		*bptr2 = temp;

		fptr1++;
		fptr2++;
		bptr1--;
		bptr2--;
	}

	printf("\n\nafter swap\n");   //swap 후 출력
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	return 0;
}
