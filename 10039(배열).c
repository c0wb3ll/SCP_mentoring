#include <stdio.h>

int main()
{
	int i, k = 1, arr[5], sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[k]);
		if (arr[k] <= 40)
		{
			arr[k] = 40;
		}
		sum += arr[k];
		k++;
	}
	printf("%d", sum / i);

	return 0;
}