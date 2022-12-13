#include "main.h"
/**
 * times_table - prints time table 9 time
 * Return: void
 */
void times_table(void)
{
	int num, row, product;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num < 10; num++)
		{
			product = (num * row);
			if (product / 10 > 0)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				if (num > 0)
				{
					_putchar(' ');
				}
			}
			_putchar((product % 10) + '0');
			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
