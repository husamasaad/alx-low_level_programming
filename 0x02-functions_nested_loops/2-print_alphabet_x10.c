#include "main.h"

/**
 * print_alphabet_x10 -  Alphabet 10 times
 *
 * Description: prints 10 times the alphabet, in lowercase
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
