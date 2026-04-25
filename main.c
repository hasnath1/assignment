#include <stdio.h>

typedef long double ld;

ld add(ld x, ld y)
{
	return x + y;
};

ld substract(ld x, ld y)
{
	return x - y;
};

ld multiply(ld x, ld y)
{
	return x * y;
};

ld divide(ld x, ld y)
{
	return x / y;
};

int main()
{
	ld x, y;

	printf("Enter two numbers : (space separated)\n ");

	scanf("%Lf %Lf", &x, &y);

	printf("%.3Lf + %.3Lf = %.3Lf\n", x, y, add(x, y));
	printf("%.3Lf - %.3Lf = %.3Lf\n", x, y, substract(x, y));
	printf("%.3Lf * %.3Lf = %.3Lf\n", x, y, multiply(x, y));
	printf("%.3Lf / %.3Lf = %.3Lf\n", x, y, divide(x, y));

	return 0;
}
