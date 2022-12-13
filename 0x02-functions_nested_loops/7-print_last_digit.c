#include "main"
/*
 *
 */
int print_last_digit(int num)
{
	if (num >= 0)
	{
		if (num >= 10)
		{
			_putchar(num % 10);
			return (num % 10);
		}
		else
		{
			_putchar(num);
			return (num);
		}
	}
	else
	{
		if (num > -10)
		{
			_putchar(num);
			return (num);
		}
		else
		{
			_putcahr((num % 10) * -1);
			return ((num % 10) * -1);
		}
	}
}
