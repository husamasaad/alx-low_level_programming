#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing numbers with putchar
 *
 * Return: 0 (success)
 */
int main()
{
	int i;
	for (i = 0; i <10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
