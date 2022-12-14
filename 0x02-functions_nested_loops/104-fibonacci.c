#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long int n1 = 0, n2 = 1, sum, l = 1000000000, h1, h2;
	unsigned long int half_n11, half_n12, half_n21, half_n22;
	int i;

	for (i = 0; i <= 92; i++)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);

		n1 = n2;
		n2 = sum;
	}

	half_n11 = (n1 /l);
	half_n12 = (n1 % l);
	half_n21 = (n2 / l);
	half_n22 = (n2 % l);

	for (i = 93; i < 99; i++)
	{
		h1 = half_n11 + half_n21;
		h2 = half_n12 + half_n22;
		if (half_n12 + half_n22 > 9999999999)
		{
			h1 += 1;
			h2 %= l;
		}

		printf("%lu%lu", h1, h2);
		if (i < 98)
			printf(", ");

		half_n11 = half_n21;
		half_n12 = half_n22;
		half_n21 = h1;
		half_n22 = h2;
	}
	putchar('\n');
	return (0);
}
