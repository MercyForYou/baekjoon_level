#include <stdio.h>

int main()
{
	int N = 0, X = 0, i = 0, num = 0;

	scanf("%d %d", &N, &X);
	for (i = 0; i <= (N - 1); i++)
	{
		scanf("%d", &num);
		if (num < X)
			printf("%d ", num);
	}
}