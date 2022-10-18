#include "main.h"

/**
 * check_format_func - match format with function format
 * @format: It's a character string
 * @list: the list of arguments the function_printf is receiving
 * @func: The function that holds all the format specifier.
 * Return: the number of character the function is printing
 */

/**
 * This is the function that finds the match between the char ("c","s","d","i", "%") in struct "funcs" and the "format" string. and also if there is not match it will print the % and the next character that is different to the ones in the struct
 */

int check_format_func(const char *format, va_list list, typ funcs[])
{
	int counter = 0, i = 0, j, k = 0, fn = 0;

	// Loop through the string format
	for(i = 0; format && format[i] != 0; i++)
	{
		// check if the string contains % character
		if (format[i] != '%')
		{
			// printing the string without specifier
			_putchar(format[i]);
			counter += 1;
		}
		else
		{
			// loop through the specifier stored in func array struct
			for(j = 0; funcs[j].ident; j++)
			{
				// check if the string character equals the specifier
				if (format[i + 1] == funcs[j].ident[k])
				{
					// call the func struct funct
					fn = funcs[j].func(list); /* This line of code calls the functions in the func struct array */
					if (fn == -1)
						return -1;
					counter += fn;
					i++;
					break;
				}
			}
			// check if the func.ident is Null and if the character specificer is not empty string
			if (funcs[j].ident == NULL && format[i + 1] != ' ')
			{
				// check if the character is not 0
				if (format[i + 1] != 0)
				{
					// print the without specificer
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
	// Check if the format is null
	if (format == NULL)
		return (-1);
	return (counter);
}
