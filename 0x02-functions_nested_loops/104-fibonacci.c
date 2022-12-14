#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3;
	int i;

	printf("%lu, %lu, ", n1, n2);

	for (i = 2; i <= 98; i++)
	{
		n3 = n1 + n2;
		if (i < 98)
		{
			printf("%lu, ", n3);
		}
		else
		{
			printf("%lu...\n", n3);
		}
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
