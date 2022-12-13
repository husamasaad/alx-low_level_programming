#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: max of the range
 * return: 0 always
 */
void print_times_table(int n)
{
	int row, num, pr;

	if (n > 15)
	{
		for (row = 0; row <= n; rone++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (num = 1; num <= n; cone++)
			{
				pr = row * num;
				if ((pr / 10) > 0)
				{
					_putchar((pr / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((pr % 10) + '0');

				if (num < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
