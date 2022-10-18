#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: the input string
 * Return: On success: total count of the characters printed
 * On failure: -1
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	typ funcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"r", print_rev},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	va_start(arg_list, format);
	printed_chars = check_format_func(format, arg_list, funcs);
	va_end(arg_list);
	return (printed_chars);
}
