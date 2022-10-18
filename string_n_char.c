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
	int cnt;

	cnt = 0;
	return (cnt);
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
	int cnt;

	cnt = 0;
	return (cnt);
}



/**
 * print_percent - prints out the special character "%"
 * @val: the input
 * Return: On success: total count of the characters printed
 * On failure: -1
 */

int print_percent(va_list val)
{
	int cnt;

	cnt = 0;
	return (cnt);
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
	int cnt;


	cnt = 0;
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
	int cnt;
	char *input, *output;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	cnt = 0;
	return (cnt);
}
