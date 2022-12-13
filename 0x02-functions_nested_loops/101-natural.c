#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) = 0 || (num % 5) = 0)
		{
			sum = sum + num;
		}
	}
	printf("%d", sum);
	return (0);
}
