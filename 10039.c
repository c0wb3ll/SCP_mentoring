#include <stdio.h>

int main()
{
	int i, score, sum = 0;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score);
		if (score <= 40)
		{
			score = 40;
		}
		sum += score;
	}
	printf("%d", sum / i);
	
	return 0;
}