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
	char putchr[] = "_putchar";
	int i = 0;

	while (putchr[i] != '\0')
	{
		_putchar(putchr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
