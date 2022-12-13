#include "main.h"
void empty_digit(int num);
void end_of_line(int num, int n);
/**
 * print_times_table - prints time table 9 time
 * @n: max range
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
			end_of_line(num, n);
		}
		_putchar('\n');
	}
}
/**
 * empty_digit - prints empty space
 * @num: the current index number
 * Return: void
 */
void empty_digit(int num)
{
	if (num > 0)
	{
		_putchar(' ');
	}
}

/**
 * end_of_line - check if it is the end of line
 * @num: current index number
 * @n : max of range
 * Return: void
 */
void end_of_line(int num, int n)
{
	if (num != n)
	{
		_putchar(',');
		_putchar(' ');
	}
}
