#include <stdio.h>

int main(void)
{
	int num1, num2;
	int And, Or, Xor;
	printf("�� ������ �Է��ϼ��� :");
	scanf_s("%d %d", &num1, &num2);
	And = num1 & num2;
	printf("%d & %d = %d \n", num1, num2, And);
	Or = num1 | num2;
	printf("%d | %d = %d \n", num1, num2, Or); 
	Xor = num1 ^ num2;
	printf("%d ^ %d = %d \n", num1, num2, Xor);

	return 0;
}