#include <stdio.h>

void ClearLine(void)
{
	while (getchar() != '\n');
}
void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

struct city
{
	char name[50];
	char country[50];
	int population;

};


int main(void)		
{
	struct city arr[3];
	int i;
	char str[50];
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population> ");
		scanf_s("%d", &arr[i].population);
		ClearLine();
		RemoveBSN(arr[i].name);
		RemoveBSN(arr[i].country);
	}

	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}
