#include "main.h"
/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0
 */
int main (void)
{
	char *putchr = "_putchar";

	while (*putchr)
	{
		_putchar(*putchr);
		putchr++;
	}
	_putchar('\n');
	return (0);
}

