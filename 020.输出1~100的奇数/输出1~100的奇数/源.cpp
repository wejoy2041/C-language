#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
			
		}
		i++;
	}

	printf("\n");

	int j = 1;
	while (j <= 100)
	{
		printf("%d ", j);
		j += 2;
	}
	return 0;
}