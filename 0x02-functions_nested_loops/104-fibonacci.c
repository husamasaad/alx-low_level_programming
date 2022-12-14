#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers.
 * Return: void
 */
int main(void)
{
	unsigned long int bef = 1, aft = 2, l = 1000000000;
	unsigned long int bef1, bef2, aft1, aft2;
	int i;

	printf("%lu", bef);

	for (i = 1; i <= 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef /l);
	bef2 = (bef % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (i = 92; i < 98; i++)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	putchar('\n');
	return (0);
}
