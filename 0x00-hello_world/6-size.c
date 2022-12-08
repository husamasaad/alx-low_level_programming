#include <stdio.h>

/**
 * main - start the program
 *
 * Description: prints the size of various types on the computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)",sizeof(c));
	printf("Size of int: %ld bytes(s)",sizeof(i));
	printf("Size of long int: %ld bytes(s)",sizeof(li));
	printf("Size of long long int: %ld bytes(s)",sizeof(lli));
	printf("Size of float: %ld bytes(s)",sizeof(f));

	return (0);
}
