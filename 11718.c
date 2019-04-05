#include <stdio.h>

int main()
{
	char ch[101];
	int num1 = 0;
	while (num1 <= 100 && gets(ch))
	{
		if (ch[0] == ' ')
			break;
		puts(ch);
		num1++;
	}
	return 0;
}
