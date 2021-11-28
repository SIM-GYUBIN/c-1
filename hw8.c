#include <stdio.h>

int converse(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')  //대문자를 소문자로
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z') //소문자를 대문자로
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