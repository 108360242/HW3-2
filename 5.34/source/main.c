#include<stdlib.h>
#include<stdio.h>

int index(int b, int e)
{
	if (e != 1)
		return b * index(b, e-1);
	return b;
}
int main(void)
{
	int base, exponent;
	printf("Enter the base: ");
	scanf_s("%d", &base);
	printf("Enter the exponent: ");
	scanf_s("%d", &exponent);
	printf("The answer is: %d\n", index(base, exponent));
	system("pause");
	return 0;
}