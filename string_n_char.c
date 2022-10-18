#include "main.h"

/**
 * print_char - Receives a value expected to be a single character
 * and prints out the single character
 * @val: input value
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_char(va_list val)
{
	char c;

	c = (va_arg(val, int));
	_putchar(c);
	return (1);
}

/**
 * print_str - Receives a value expected to be a string
 * print a formated string
 * @val: the input
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_str(va_list val)
{
	int cnt, i;
	char *str;

	str = (va_arg(val, char *));
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		cnt++;
	}
	return (cnt);
}



/**
 * print_percent - prints out the special character "%"
 * @val: the input
 * Return: On success: total count of the characters printed
 * On failure: -1
 */

int print_percent(__attribute__((unused))va_list val)
{
	_putchar('%');
	return (1);
}

/**
 * print_rev - Receives a value expected to be a string
 *  and prints the string in reverse
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int print_rev(va_list val)
{
	int cnt, i;
	char *str;

	str = (va_arg(val, char *));
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		cnt++;
	}
	return (cnt);
}

/**
 * rot13 - Receives a value expected to be a string,
 * rotates each character by 13 characters forward
 * and print a formated string of the resulting characters
 * @val: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int rot13(va_list val)
{
	int cnt, i;
/*
*char *input, *output;
*
*	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
*	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
*/
	char *str;

	str = (va_arg(val, char *));
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		cnt++;
	}
	return (cnt);
}
