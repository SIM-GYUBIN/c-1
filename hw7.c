#include <stdio.h>
#include <math.h>

void gogo(double array[])
{
	int j,k;
	double sum = 0;
	double temp = array[2];
	for(j = 0;j < 5; j++)
		array[j] = array[j] - temp;
	for (j = 0; j < 5; j++)
		array[j] = pow(array[j], 2);
	for (j = 0; j < 5; j++)
		sum += array[j];
	printf("Standard Deviation: \n");
	printf("%lf", sqrt(sum / 5));
}




int main(void)
{
	int i;
	double array[5];
	printf("Enter 5 real numbers: \n");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%lf", &array[i]);
	}
	gogo(array);
}
