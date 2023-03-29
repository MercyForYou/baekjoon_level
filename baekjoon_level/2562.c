#include <stdio.h>

int main()
{
	int num[10] = { 0 };
	int max = 0, i = 0, index = 0;

	for (; i <= 8; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] > max)
		{
			max = num[i];
			index = i + 1;
		}
	}
	printf("%d\n%d", max, index);
}