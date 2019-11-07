#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a;
	printf("Enter your alphabet: ");
	scanf_s("%c", &a);
	if (a>= 'A' && a<='Z')
	{
		a = a + 32;
		printf("%c\n", a);
	}
	else if (a>='a'&&a<='z')
	{	
		a = a - 32;
		printf("%c\n", a);
		
	}
	else
		printf("You enter the wrong alphabet!\n");
	system("pause");
	return 0;
}