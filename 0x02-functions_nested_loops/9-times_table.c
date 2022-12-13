#include "main.h"
/**
 * times_table - prints time table 9 time
 * Return: void
 */
void times_table(void)
{
	int num, row;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num < 10; num++)
		{
			_putchar((num * row) + '0');
			if (num != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
