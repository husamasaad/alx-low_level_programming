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
			return (num % 10);
		}
		else
		{
			return (num);
		}
	}
	else
	{
		if (num > -10)
		{
			return (num);
		}
		else
		{
			return ((num % 10) * -1);
		}
	}
}
