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
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
}

/**
 * len_of_base - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int len_of_base(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
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
	iunsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(val, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = len_of_base(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
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
