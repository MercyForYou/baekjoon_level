#include <stdio.h>

int main()
{
	char S[20] = { 0 };
	int T = 0, R = 0, i, j;

	scanf("%d", &T);
	for (i = 0; i <= (T - 1); i++)
	{
		scanf("%d %s", &R, S);
		for (j = 0; j <= (R - 1); j++)
		{
			printf("%c", S);
		}
	}
}