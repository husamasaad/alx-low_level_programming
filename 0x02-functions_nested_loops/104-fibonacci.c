#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	int count = 0;
	i = 0;
	j = 1;
	for (count = 0; count < 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	n = j % 1000;
	while (count < 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu%lu", k, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');

	return (0);
}
