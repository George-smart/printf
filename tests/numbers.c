#include "main.h"



/**
 * print_int - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_int(va_list val)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(val, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
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
