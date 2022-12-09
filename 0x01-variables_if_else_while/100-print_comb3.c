#include <stdio.h>
/**
 * main - entry point
 * 
 * Description: advanced task
 *
 * Return: 0 (succes)
 */
int main()
{
	int i, k;
	int j = 0;

	for (i = 0; i < 10; i++)
		for (k = 1; k < 10; k++)
		{
			if (k > j)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
				j++;
			}
		}
	putchar('\n');
	return (0);
}
