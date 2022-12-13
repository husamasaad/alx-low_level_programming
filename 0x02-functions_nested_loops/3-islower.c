#include "main.h"

/**
 * _islower - check for lower
 * @c: single letter input
 * Description: checks for lowercase character
 * Return: 1 if is lower 0 otherwise
 */
int _islower(int c)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
		{
			return (1);
		}
	}
	return (0);
}
