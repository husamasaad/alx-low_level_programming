#include "main.h"
/*
 *
 */
int print_last_digit(int num)
{
	if (num >= 0)
	{
		if (num >= 10)
		{
			_putchar('0' + (num % 10));
			return (num % 10);
		}
		else
		{
			_putchar('0' + num);
			return (num);
		}
	}
	else
	{
		if (num > -10)
		{
			_putchar('0' + num);
			return (num);
		}
		else
		{
			_putchar('o' + ((num % 10) * -1));
			return ((num % 10) * -1);
		}
	}
}
