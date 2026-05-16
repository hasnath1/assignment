#include <stdio.h>

// Pascal's Triangle
// #include "combinatorics.h"
/*
int main()
{

	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = n - i - 1; j > 0; j--)
		{
			printf(" ");
		}

		for (int j = 0; j <= i; j++)
		{
			printf("%d ", c(i, j));
		}
		printf("\n");
	}

	return 0;
}
*/

/*

// Hollow Pyramid
int main()
{
	int n;
	scanf("%d", &n);

	if (n < 1)
	{
		printf("Error : Value can't be less than 1\n");
		return 0;
	}

	int num_of_char = 2 * n - 1;
	int m = (num_of_char + 1) / 2;
	int l = m - 1, r = m + 1;

	for (int i = 1; i <= n; i++)
	{

		if (i == 1)
		{
			for (int j = 1; j <= num_of_char; j++)
			{
				if (j == m)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");

			continue;
		}
		if (i == n)
		{
			for (int j = 1; j <= num_of_char; j++)
			{
				printf("*");
			}
			printf("\n");
			continue;
		}

		for (int j = 1; j <= num_of_char; j++)
		{
			if (j == l || j == r)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		l--;
		r++;
	}

	return 0;
}

*/

/*
// Password Validator

#include <stdio.h>

int main()
{
	char str[256];
	printf("Enter your password :\n");

	scanf("%[^\n]", str);
	getchar();
	printf("%s\n", str);

	int lowerCase = 0;
	int upperCase = 0;
	int specialChar = 0;
	int integers = 0;
	int numOfChar = 0;

	char *c = str;
	while ((*c) != '\n' && (*c) != '\0')
	{
		char t = (*c);

		if (t >= 'a' && t <= 'z')
			lowerCase++;

		if (t >= 'A' && t <= 'Z')
			upperCase++;

		if (t >= '0' && t <= '9')
			integers++;

		if (t == '#' || t == '@' || t == '!' || t == ';' || t == '?')
			specialChar++;

		numOfChar++;
		c++;
	}

	if (integers < 1 || specialChar < 1 || upperCase < 1 || lowerCase < 1 || numOfChar < 8)
	{
		printf("Error : Password is not valid!\n");
	}
	else
	{
		printf("Password is valid.\n");
	}

	return 0;
}
*/