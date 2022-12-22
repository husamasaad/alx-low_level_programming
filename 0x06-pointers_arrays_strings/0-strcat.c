#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: first word
 * @src: second word
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest)
}
