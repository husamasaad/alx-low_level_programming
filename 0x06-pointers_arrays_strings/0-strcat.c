#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: first word
 * @src: second word
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (src[len1] != '\0')
	{
		len1++;
	}

	while (dest[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len1; i++)
	{
		dest[len2] = src[i];
		len2++;
	}

	return (dest);
}
