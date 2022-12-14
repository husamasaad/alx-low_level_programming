#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long int t0 = 0, t1 = 1, s;

	int i;

	for (i = 1; i <= 94; i++)
	{
		s = t0 + t1;
		if (i != 94)
		{
			printf("%lu, ", s);
		}
		else
		{
			printf("%lu\n", s);
		}
		t0 = t1;
		t1 = s;
	}
	return (0);
}
