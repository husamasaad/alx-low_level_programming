#include "main.h"
#include <stdio.h>
/**
 *
 */
void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
	}
	putchar('\n');
}
