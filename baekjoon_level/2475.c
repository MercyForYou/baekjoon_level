#include <stdio.h>

int main()
{
	int num[6] = { 0 };
	int i = 0, sum = 0;

	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i] * num[i];
	}
	printf("%d", (sum % 10));
}