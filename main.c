#include <stdio.h>

int main()
{

	int n;

	scanf("%d", &n);

	if (n < 3)
	{
		printf("Error : Value can't be less than 3\n");
		return 0;
	}

	int num_of_lines = 2 * (n - 2) + 1;
	int middle = (num_of_lines + 1) / 2;
	int CharPerLine = num_of_lines + 1;

	for (int i = 1; i <= num_of_lines; i++)
	{
		if (i == middle)
		{
			int spaceCount = (CharPerLine - 2) / 2;
			for (int j = 0; j <= spaceCount; j++)
			{
				printf(" ");
			}

			printf("@\n");
			continue;
		}

		int starDashCount = (CharPerLine - 2) / 2;

		if (i % 2 != 0)
		{
			for (int j = 0; j < starDashCount; j++)
			{
				printf("*");
			}

			if (i < middle)
			{
				printf("\\ /");
			}
			else
			{
				printf("/ \\");
			}

			for (int j = 0; j < starDashCount; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{

			for (int j = 0; j < starDashCount; j++)
			{
				printf("_");
			}

			if (i < middle)
			{
				printf("\\ /");
			}
			else
			{
				printf("/ \\");
			}

			for (int j = 0; j < starDashCount; j++)
			{
				printf("_");
			}

			printf("\n");
		}
	}

	return 0;
}
