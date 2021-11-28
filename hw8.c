#include <stdio.h>

int converse(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')  //�빮�ڸ� �ҹ��ڷ�
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z') //�ҹ��ڸ� �빮�ڷ�
		return ch - diff;
	else
		return ch;
}



int main(void)
{
	char str[50];
	int i,len;
	
	printf("Input>");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++)
		str[i] = converse(str[i]);
	printf("Output> %s", str);

	return 0;
}