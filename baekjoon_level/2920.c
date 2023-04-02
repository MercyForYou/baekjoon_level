#include <stdio.h>

int main()
{
	int num[8];
	int check = 0, i;

	for (i = 0; i < 8; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 7; i++)
	{
		if (num[i] + 1 == num[i + 1])
			check++;
		else if (num[i] - 1 == num[i + 1])
			check--;
		else
		{
			printf("mixed");
			return 0;
		}
	}
	if (check == 7)
		printf("ascending");
	else
		printf("descending");
}