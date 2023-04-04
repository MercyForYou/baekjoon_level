#include <stdio.h>

int main()
{
	static int num[1000000];
	int N = 0, i, max = 0, min = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	max = num[0];
	min = num[0];

	for (i = 0; i < N; i++)
	{
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}
	printf("%d %d", min, max);
}