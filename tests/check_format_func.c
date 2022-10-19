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
	int i, j, fn, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; funcs[j].ident != NULL; j++)
			{
				if (format[i + 1] == funcs[j].ident[0])
				{
					fn = funcs[j].func(list);
					if (fn == -1)
						return (-1);
					count += fn;
					break;
				}
			}
			if (funcs[j].ident == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
