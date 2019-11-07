#include<stdlib.h>
#include<stdio.h>

long int power(int h)
{
	if (h == 0)
		return 0;
	if (h == 1)
		return 1;
	if (h != 0 && h != 1)
		return power(h - 1) + power(h - 2);
}

int main(void)
{
	int h;
	printf("Enter n: ");
	scanf_s("%d", &h);
	printf("f(%d) is: %d\n", h, power(h));
	system("pause");
	return 0;
}