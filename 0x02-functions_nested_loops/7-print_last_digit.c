#include "main.h"
/**
 * print_last_digit - the last digit of a number
 * @num: number's last digit result
 * Description: a function that prints the last digit of a number
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
