#include "main.h"

/**
 * int _islower - check for lower
 * 
 * Description: checks for lowercase character
 *
 * Return: 1 if is lower 0 otherwise
 */
int _islower(int c)
{
	for (let l = 'a'; l <= 'z'; l++)
	{
		if ( c == l)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
