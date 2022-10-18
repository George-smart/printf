#include "main.h"


/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 *
 * Return: Nothing
 */
int print_number(int n)
{
	unsigned int x, cnt = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		cnt += 1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
	cnt += 1;

	return (cnt);
}

/**
 * print_int - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_int(va_list val)
{
	int cnt, num = va_arg(val, int);

	cnt = print_number(num);
	return (cnt);
}

/**
 * print_num - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_num(va_list val)
{
	int cnt, num = va_arg(val, int);

	cnt = 0;
	if (num > 0)
		return (num);
	return (cnt);
}

/**
 * unsigned_integer - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int unsigned_integer(va_list val)
{
	int cnt, num = va_arg(val, int);

	cnt = 0;
	if (num > 0)
		return (num);
	return (cnt);
}
