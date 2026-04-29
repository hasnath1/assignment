// #include <stdio.h>

// typedef long double ld;

// ld add(ld x, ld y)
// {
// 	return x + y;
// };

// ld substract(ld x, ld y)
// {
// 	return x - y;
// };

// ld multiply(ld x, ld y)
// {
// 	return x * y;
// };

// ld divide(ld x, ld y)
// {
// 	return x / y;
// };

// int main()
// {
// 	ld x, y;

// 	printf("Enter two numbers : (space separated)\n ");

// 	scanf("%Lf %Lf", &x, &y);

// 	printf("%.3Lf + %.3Lf = %.3Lf\n", x, y, add(x, y));
// 	printf("%.3Lf - %.3Lf = %.3Lf\n", x, y, substract(x, y));
// 	printf("%.3Lf * %.3Lf = %.3Lf\n", x, y, multiply(x, y));
// 	printf("%.3Lf / %.3Lf = %.3Lf\n", x, y, divide(x, y));

// 	return 0;
// }

// Start -->

#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int multi(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

int main()
{

	int x, y;

	printf("Enter two numbers : \n");

	scanf("%d %d", &x, &y);

	printf("%d + %d = %d\n", x, y, add(x, y));
	printf("%d - %d = %d\n", x, y, sub(x, y));
	printf("%d * %d = %d\n", x, y, multi(x, y));
	printf("%d / %d = %d\n", x, y, divide(x, y));

	char c1, c2, c3, c4, c5,c6;

	printf("Enter your name:(max 5 chars)\n");
	scanf("%c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5,&c6);

	printf("Hello %c%c%c%c%c%c!\n", c1, c2, c3, c4, c5,c6);

	return 0;
}
