#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  * @div: divisor
  * Return: Nothing
  */
int print_number(unsigned int n, unsigned int div)
{
 int cnt = 0;

	if (n / div)
		cnt += print_number(n / div, div);

	cnt += _putchar(n % div + '0');

	return (cnt);
}


/**
 * print_bin - Receives the main string and all the necessary parameters to
 * print a formated string
 * @val: the input argument
 * Return: On success: total count of the characters printed
 * On failure: -1
 */

int print_bin(va_list val)
{
	int cnt;
	unsigned int num = va_arg(val, unsigned int), div = 8;

	cnt = print_number(num, div);
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
	int cnt;
	unsigned int num = va_arg(val, unsigned int), div = 8;

	cnt = print_number(num, div);
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
