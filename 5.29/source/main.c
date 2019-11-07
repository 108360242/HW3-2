#include <stdio.h>
#include <stdlib.h>

int gcd(int n, int m)
{
	if (m == 0)
		return n;
	else
		return gcd(m, n%m);
}

int lcm(int n, int m)
{
	return (n*m) / gcd(n, m);
}
int	main(void)
{
	int num1, i, num2;

	printf("Enter number1: ");
	scanf_s("%d", &num1);
	printf("Enter number2: ");
	scanf_s("%d", &num2);

	printf("The LCM is :%d\n", lcm(num1, num2));
	system("pause");
	return 0;
}