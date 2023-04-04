#include <stdio.h>

int main()
{
	char num[100];
	int N = 0, i, sum = 0, a;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf(" %c", &num[i]);
		sum += num[i] - 48;
	}
	printf("%d", sum);
}