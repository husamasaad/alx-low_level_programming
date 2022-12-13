#include "main.h"

/**
 * print_alphabes_10x - 10 x Alphabet
 *
 * Description:  prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		print_alphabet();
		_putchar('\n');
	}
	_putchar('\n');
}
