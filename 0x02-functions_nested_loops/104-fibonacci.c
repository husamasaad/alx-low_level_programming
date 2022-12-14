#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, nl1, nl2, nl3, nl4;
	int i;

	printf("%lu", n1);

	for (i = 1; i <= 91; i++)
	{
		printf(", %lu", n2);
		n2 += n1;
		n1 = n2 - n1;
	}

	nl1 = (n1 / 1000000000);
	nl2 = (n1 % 1000000000);
	nl3 = (n2 / 1000000000);
	nl4 = (n2 % 1000000000);

	for (i = 92; i < 98; i++)
	{
		printf(", %lu", nl1 + (nl2 / 1000000000));
		printf("%lu", nl2 % 1000000000);
		nl3 = nl3 + nl1;
		nl1 = nl3 - nl1;
		nl4 = nl4 + nl2;
		nl2 = nl4 - nl2;
	}
	putchar('\n');
	return (0);
}
