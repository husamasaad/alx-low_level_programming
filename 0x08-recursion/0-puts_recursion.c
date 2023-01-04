#include "main.h"

/**
 * _puts_recursion -  a function that prints a string, followed by a new line
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
