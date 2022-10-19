#include "main.h"
/**
 * check_format_func - match format with function format
 * @format: It's a character string
 * @list: the list of arguments the function_printf is receiving
 * @funcs: The function that holds all the format specifier.
 * Return: the number of character the function is printing
 */

int check_format_func(const char *format, va_list list, typ funcs[])
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; funcs[j].ident != NULL; j++)
			{
				if (format[i + 1] == funcs[j].ident[0])
				{
					r_val = funcs[j].func(list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (funcs[j].ident == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			printed_chars++;
		}
	}
	return (printed_chars);
}
