#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
