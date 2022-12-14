#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long int n1 = 0, n2 = 1, n3;
	int i;

	for (i = 1; i <= 91; i++)
	{
		n3 = n1 + n2;
		if (i < 91)
		{
			printf("%lu, ", n3);
		}
		else
		{
			printf("%lu\n", n3);
		}
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
