#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, char A, char B, char C) {
	if (n == 1)
	{
		printf("Move sheet from %c to %c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}

int main(void)
{
	int n;
	printf("請輸入盤數：");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');//A來源B輔助C目的
	system("pause");
	return 0;
}