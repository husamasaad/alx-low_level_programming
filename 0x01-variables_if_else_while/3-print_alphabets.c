#include <stdio.h>
/**
 * main - entry poin
 *
 * Description: prints a-zA-Z
 *
 * Return: 0 (success)
 */
int main(void)
{
	int l,u;
	
	for (l = 'a'; l <= 'z'; ++l)
		putchar(l);
	for (u = 'A'; u <= 'Z'; ++u)
		putchar(u);
	putchar('\n');
	return (0);
}
