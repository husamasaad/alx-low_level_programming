#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing from a given number to 98
 * @n: the starting point
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	putchar('\n');
}
