#include <stdio.h>

int main()
{
	int i, num1, plus1, plus2;
	scanf("%d", &num1);
	for (i = 1; i <= num1; i++)
	{
		scanf("%d %d", &plus1, &plus2);
		printf("%d\n", plus1 + plus2);
	}
	return 0;
}