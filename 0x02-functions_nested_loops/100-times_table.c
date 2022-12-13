#include "main.h"
void empty_digit(int num);
void end_of_line(int num);
/**
 * print_times_table - prints time table 9 time
 * Return: void
 */
void print_times_table(int n)
{
	int num, row, product;

	if (n > 15)
	{
		return;
	}
	for (row = 0; row < n + 1; row++)
	{
		for (num = 0; num < n + 1; num++)
		{
			product = (num * row);		
			if (product / 100 > 0)
			{
				_putchar((product / 100) + '0');
			}
			else
			{
				empty_digit(num);
			}
			if ((product / 10) > 0 && (product / 10) < 10)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				if ((product / 10) > 0)
				{
					_putchar(((product % 100) / 10) + '0');
				}
				else
				{
					empty_digit(num);
				}
			}
			_putchar((product % 10) + '0');
			end_of_line(num);
		}
		_putchar('\n');
	}
}

void empty_digit(int num)
{
	if (num > 0)
	{
		putchar(' ');
	}
}

void end_of_line(int num)
{
	if (num != n)
	{
		_putchar(',');
		_putchar(' ');
	}
}
