#include "main.h"

/**
 * print_bin - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */

int print_bin(va_list val)
{
	int cnt, num = va_arg(val, int);

	cnt = 0;
	if (num > 0)
		return (num);
	return (cnt);
}

/**
 * print_octal - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */

int print_octal(va_list val)
{
	int cnt, num = va_arg(val, int);

	cnt = 0;
	if (num > 0)
		return (num);
	return (cnt);
}

/**
 * print_hex - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_hex(va_list val)
{
	int cnt, num = va_arg(val, int);

	cnt = 0;
	if (num > 0)
		return (num);
	return (cnt);
}

/**
 * print_heX - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_heX(va_list val)
{
	int cnt, num = va_arg(val, int);

	cnt = 0;
	if (num > 0)
		return (num);
	return (cnt);
}
