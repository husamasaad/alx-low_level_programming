#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
