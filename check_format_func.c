#include "main.h"
/**
 * check_format_func - match format with function format
 * @format: It's a character string
 * @list: the list of arguments the function_printf is receiving
 * @func: The function that holds all the format specifier.
 * Return: the number of character the function is printing
 */

int check_format_func(const char *format, va_list list, typ funcs[])
{
	int counter = 0, i = 0, j, k = 0, fn = 0;
	
	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter += 1;
		}
		else
		{
			for (j = 0; funcs[j].ident; j++)
			{
				if (format[i + 1] == funcs[j].ident[k])
				{
					fn = funcs[j].func(list);
					if (fn == -1)
						return (-1);
					counter += fn;
					i++;
					break;
				}
			}
			if (funcs[j].ident == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					counter += 2;
					i++;
				}
				else
					return (-1);
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (counter);
}
