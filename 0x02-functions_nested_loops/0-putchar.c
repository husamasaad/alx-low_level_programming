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
	char pt[] = "_putchar";
	int i = 0;

	while (i != '\0')
	{
		_putchar(*pt);
		i++;
	}
	_putchar('\n');
	return (0);
}

