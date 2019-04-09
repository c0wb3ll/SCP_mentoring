#include <stdio.h>

int main()
{
	int i, j, num, max = 0, order[1000];
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &order[i]);
	}
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (order[i] > order[j])
			{
				max = order[i];
				order[i] = order[j];
				order[j] = max;
			}
		}
	}
	for (i = 0; i < num; i++)
	{
		printf("%d\n", order[i]);
	}
	return 0;
}